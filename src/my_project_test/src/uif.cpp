#include "uif.h"
#include "my_project_test/can_out_MT4000.h"
#include "my_project_test/ctr_can_MT4000.h"
#include "my_project_test/ctr_can_930E.h"
#include "my_project_test/can_out_930E.h"
#include "my_project_test/CmdFromControllerToCAN.h"
#include "my_project_test/CmdFromDecisionToCAN.h"
#include "my_project_test/CmdFromSecurityToCAN.h"
#include "my_project_test/InfoFromCan.h"

void callback_MT4000(const my_project_test::can_out_MT4000::ConstPtr &input)
{
    canToUiMsg_t My_CTU;
    My_CTU.driverMode_b         =  input->driverMode_b;           // 0: 有人驾驶，1： 无人驾驶
    My_CTU.gearP_b              =  input->gearP_b;                // 驻车制动挡反馈， 1=开关动作，0=开关无动作
    My_CTU.loadBrake_b          =  input->loadBrake_b;            // 装载制动挡反馈， 1=开关动作，0=开关无动作
    My_CTU.turtle_b             =  input->turtle_b;               // 龟速模式反馈， 1=开关动作，0=开关无动作
    My_CTU.takeOver_b           =  input->takeOver_b;             // 0: 未接管，1：人工接管
    My_CTU.gear                 =  (input->gear)&(0x000000FF);    // 档位反馈 0：空挡 1：前进档 2：倒车档   
    My_CTU.wheelAngle           =  1.0*(input->wheelAngle);       // 前轮转向角度[-350,250]，1=1度，左转为正数最大25度，右转为负数最值为-35度
    My_CTU.velocity             =  1.0 * input->velocity;         // 实时速度，1=1km/h
    My_CTU.rpm                  =  (input->rpm)&(0x0000FFFF);     // 驱动轮轮速, [0,3000]
    My_CTU.throttle             =  input->throttle;               // 油门踏板指令 1=1%, 0-100%
    My_CTU.electronic_break     =  input->electronic_break;       // 电制动踏板指令 1=1%, 0-100%
    My_CTU.vechleId             =  input->vechleId;               // 车辆识别码，[0,255]
    My_CTU.engineSpeed          =  (input->engineSpeed)&(0x0000FFFF);   // 发动机转速，[0,65535]
    My_CTU.batteryVoltage       =  1.0 * input->batteryVoltage;   // 电池电压，0-300   系统供电电压  1=0.1V
    My_CTU.faultTotal           =  input->faultTotal;             // 整车故障, 0：无故障, 1：一般故障,2：严重故障,3：致命故障
    My_CTU.dump_bed             =  input->dump_bed;               // 货箱举升实时角度反馈    0-100   货箱举升实时角度反馈  1=1%
    My_CTU.loading              =  1.0 * input->loading;          // 载重量   0-255   载重量 1=1T
    My_CTU.elecControlTemp      =  1.0 * input->elecControlTemp;  // 电控箱温度信息反馈 0-125 电控箱温度信息反馈 -40 offset
    My_CTU.oil                  =  input->oil;                    // 燃油油位  0-100   燃油量 1=1%
    My_CTU.mileage              =  input->mileage;                // 车辆总里程数    0-2^32  车辆总里程数  1=1m/Bit
    My_CTU.lighting_b           =  input->lighting_b;             // 照明反馈, 0 无动作， 1 动作
    My_CTU.horn_b               =  input->horn_b;                 // 喇叭反馈, 0 无动作， 1 动作
    My_CTU.leftLamp_b           =  input->leftLamp_b;             // 转向灯反馈, 0 无动作， 1 动作
    My_CTU.rightLamp_b          =  input->rightLamp_b;            // 转向灯反馈, 0 无动作， 1 动作
    My_CTU.bothLamp_b           =  input->bothLamp_b;             // 双闪反馈, 0 无动作， 1 动作
    if(rec_ui_cb) 
    {
        rec_ui_cb(&My_CTU);  
    } 
}

void callback_930E(const my_project_test::can_out_930E::ConstPtr &input)
{
    canToUiMsg_t My_CTU;
    My_CTU.driverMode_b   =  input->driverMode_b;                // 0: 有人驾驶，1： 无人驾驶
    My_CTU.gearP_b        =  input->gearP_b;                     // 驻车制动挡反馈， 1=开关动作，0=开关无动作
    My_CTU.loadBrake_b    =  input->loadBrake_b;                 // 装载制动挡反馈， 1=开关动作，0=开关无动作
    My_CTU.turtle_b       =  input->turtle_b;                    // 龟速模式反馈， 1=开关动作，0=开关无动作
    My_CTU.takeOver_b     =  input->takeOver_b;                  // 0: 未接管，1：人工接管
    My_CTU.gear           =  (input->gear)&(0x000000FF);         // 档位反馈 0：空挡 1：前进档 2：倒车档   
    My_CTU.wheelAngle     =  1.0*(input->wheelAngle);            // 前轮转向角度[-350,250]，1=1度，左转为正数最大25度，右转为负数最值为-35度
    My_CTU.velocity       =  1.0 * input->velocity;              // 实时速度，1=1km/h
    My_CTU.rpm            =  (input->rpm)&(0x0000FFFF);          // 驱动轮轮速, [0,3000]
    My_CTU.vechleId       =  input->vechleId;                    // 车辆识别码，[0,255]
    My_CTU.engineSpeed    =  (input->engineSpeed)&(0x0000FFFF);  // 发动机转速，[0,65535]
    My_CTU.batteryVoltage =  1.0 * input->batteryVoltage;        // 电池电压，0-300   系统供电电压  1=0.1V
    My_CTU.faultTotal     =  input->faultTotal;                  // 整车故障, 0：无故障, 1：一般故障,2：严重故障,3：致命故障
    My_CTU.dump_bed       =  input->dump_bed;                    // 货箱举升实时角度反馈    0-100   货箱举升实时角度反馈  1=1%
    My_CTU.loading        =  1.0 * input->loading;               // 载重量   0-255   载重量 1=1T
    My_CTU.faultCode      =  input->faultCode;                   // 故障代码   0-255
    My_CTU.elecControlTemp=  input->elecControlTemp;             // 电控箱温度信息反馈 0-125 电控箱温度信息反馈 -40 offset
    My_CTU.faultFeedback2 =  input->faultFeedback2;              //错误反馈
    My_CTU.oil            =  input->oil;                         // 燃油油位  0-100   燃油量 1=1%
    My_CTU.mileage        =  input->mileage;                     // 车辆总里程数    0-2^32  车辆总里程数  1=1m/Bit
    My_CTU.lighting_b     =  input->lighting_b;                  // 照明反馈, 0 无动作， 1 动作
    My_CTU.horn_b         =  input->horn_b;                      // 喇叭反馈, 0 无动作， 1 动作
    My_CTU.leftLamp_b     =  input->leftLamp_b;                  // 转向灯反馈, 0 无动作， 1 动作
    My_CTU.rightLamp_b    =  input->rightLamp_b;                 // 转向灯反馈, 0 无动作， 1 动作
    My_CTU.bothLamp_b     =  input->bothLamp_b;                  // 双闪反馈, 0 无动作， 1 动作
    My_CTU.hydraulic_oil_temperature=input->hydraulic_oil_temperature; //液压油温度 0-100
    My_CTU.oil_pressure   =  input->oil_pressure;                //机油压力 0-690
    My_CTU.engine_water_cooling = input->engine_water_cooling;   //发动机冷却水温度 38-138
    if(rec_ui_cb) 
    {
        rec_ui_cb(&My_CTU);  
    } 
}

void callback_NTE200(const my_project_test::InfoFromCan::ConstPtr &input)
{
    canToUiMsg_t My_CTU;
    My_CTU.faultTotal          = input->executive_fault_level;  //执行层故障等级信号
    My_CTU.loading             = input->truck_load_weight;      //车辆载重信号      0~255吨
    My_CTU.hydraulic_brake_fb  = input->hydraulic_brake_fb;     //液压工作制动反馈信号 0~100 对应0~最高压力
    My_CTU.driverMode_b        = input->auto_mode_fb;           //无人/人工驾驶模式信号 0/1 0:人工驾驶，1：自动驾驶
    My_CTU.emergency_brake_fb  = input->emergency_brake_fb;     //紧急制动-实施/解除反馈信号 0/1 0:解除，1：已实施
    if(input->container_rising==1)             My_CTU.dump_bed=1<<0;
    else if(input->container_falling==1)       My_CTU.dump_bed=1<<1;
    else if(input->container_rising_over==1)   My_CTU.dump_bed=1<<2;
    else if(input->container_falling_over==1)  My_CTU.dump_bed=1<<3;
    My_CTU.electronic_break    = input->electric_brake_fb;      //电缓行实施  0/1  0:未实施，1：已实施
    My_CTU.loadBrake_b         = input->load_brake_fb;          //装载制动-实施/解除反馈信号 0/1 0:解除，1：已实施
    My_CTU.gearP_b             = input->park_brake_fb;          //驻车制动-实施/解除反馈信号 0/1 0:解除，1：已实施
    My_CTU.oil                 = input->remaining_oil;          //油量剩余 0~100 0~100%百分比范围值
    My_CTU.wheelAngle          = input->steer_angle_fb;         //左前轮转向角（左转为正，右转为负）-35~35
    My_CTU.engineSpeed         = input->engine_speed;           //发动机转速 0~8031.875rpm
    My_CTU.velocity            = input->truck_speed;            //车速 0~125km/h
    My_CTU.gear                = input->gear_fb;                //档位反馈  0/1/2 0-N,1-D,2-R
    if(rec_ui_cb) 
    {
        rec_ui_cb(&My_CTU); 
    } 
}

void* pth_callback(void* arg)
{
    if(CurChannel.compare("ROS")==0)
    {
        ros::NodeHandle n;
        ros::Publisher  my_pub;
        ros::Publisher  my_pub_2;
        ros::Publisher  my_pub_3;
        ros::Subscriber my_sub;
        if(My_vehicleModel=="MT4400")
        {
            my_pub = n.advertise<my_project_test::ctr_can_MT4000>("ros_to_can_MT4000",200);
            my_sub = n.subscribe("can_to_ros_MT4000",200,callback_MT4000);     
        }
        else if(My_vehicleModel=="930E")
        {
            my_pub = n.advertise<my_project_test::ctr_can_930E>("ros_to_can_MT4000",200);
            my_sub = n.subscribe("can_to_ros_MT4000",200,callback_930E);     
        }
        if(My_vehicleModel=="NTE200")
        {
            my_pub   = n.advertise<my_project_test::CmdFromControllerToCAN>("/pingshuo_controller_node/TruckCmdFromControllerToCAN",200);
            my_pub_2 = n.advertise<my_project_test::CmdFromDecisionToCAN>("/pingshuo_decision_node/TruckCmdFromDecisionToCAN",200);
            my_pub_3 = n.advertise<my_project_test::CmdFromSecurityToCAN>("/pingshuo_security_node/TruckCmdFromSecurityToCAN",200);
            my_sub   = n.subscribe("/can_node/TruckInfoFromCAN",200,callback_NTE200); 
        }

        while(ros::ok()) 
        {
            if(Update_Flag==1)
            {
                if(My_vehicleModel=="MT4400")
                {
                    my_project_test::ctr_can_MT4000 ccM;
                    ccM.driveMode_b=New_Msg->driverMode_b;               //自动模式开关 0:人工驾驶   1：自动驾驶
                    ccM.throttle=New_Msg->throttle;                      //油门踏板指令 0-100
                    ccM.electronic_break=New_Msg->electronic_break;      //电制动踏板指令 0-100
                    ccM.hydraulic_break=New_Msg->hydraulic_break;        //液压制动踏板指令 0-100
                    ccM.park_b = New_Msg->park_b;
                    ccM.steerAngle=New_Msg->steerAngle;                  //转向角度指令, [-400,400],正数位左转角度，最大为40°，右转为负数，最大值为-40°；
                    ccM.gear=New_Msg->gear;                              //档位指令 0：空挡 1：前进档 2：倒车档 3：驻车制动档
                    ccM.dump_bed=New_Msg->dump_bed; 	                    //货箱举升高度指令 0-100
                    ccM.powerSupply_b=New_Msg->powerSupply_b;            // 断电指令, 0 无动作， 1 动作
                    ccM.engine_b=New_Msg->engine_b;                      // 发送机熄火指令, 0 无动作， 1 动作
                    ccM.loadBrake_b=New_Msg->loadBrake_b;                // 装载制动, 0 无动作， 1 动作
                    ccM.turtle_b=New_Msg->turtle_b;                      // 龟速模式, 0 无动作， 1 动作
                    ccM.lubricate_b=New_Msg->lubricate_b;                // 强制润滑, 0 无动作， 1 动作
                    ccM.firePrevent_b=New_Msg->firePrevent_b;            // 消防, 0 无动作， 1 动作
                    ccM.emergencyBrake_b = New_Msg->emergencyBrake_b;
                    ccM.lighting_b=New_Msg->lighting_b;                  // 照明, 0 无动作， 1 动作
                    ccM.horn_b=New_Msg->horn_b;                          // 喇叭, 0 无动作， 1 动作
                    ccM.leftLamp_b=New_Msg->leftLamp_b;
                    ccM.rightLamp_b=New_Msg->rightLamp_b;                // 转向灯, 0 无动作， 1 动作
                    ccM.bothLamp_b=New_Msg->bothLamp_b;                  // 双闪, 0 无动作， 1 动作 
                    my_pub.publish(ccM);
                }
                else if(My_vehicleModel=="930E")
                {
                    my_project_test::ctr_can_930E ccM;
                    ccM.driveMode_b=New_Msg->driverMode_b;               //自动模式开关 0:人工驾驶   1：自动驾驶
                    ccM.throttle=New_Msg->throttle;                      //油门踏板指令 0-100
                    ccM.electronic_break=New_Msg->electronic_break;      //电制动踏板指令 0-100
                    ccM.hydraulic_break=New_Msg->hydraulic_break;        //液压制动踏板指令 0-100
                    ccM.park_b = New_Msg->park_b;
                    ccM.steerAngle=New_Msg->steerAngle;                  //转向角度指令, [-400,400],正数位左转角度，最大为40°，右转为负数，最大值为-40°；
                    ccM.gear=New_Msg->gear;                              //档位指令 0：空挡 1：前进档 2：倒车档 3：驻车制动档
                    ccM.dump_bed=New_Msg->dump_bed; 	                    //货箱举升高度指令 0-100
                    ccM.powerSupply_b=New_Msg->powerSupply_b;            // 断电指令, 0 无动作， 1 动作
                    ccM.engine_b=New_Msg->engine_b;                      // 发送机熄火指令, 0 无动作， 1 动作
                    ccM.loadBrake_b=New_Msg->loadBrake_b;                // 装载制动, 0 无动作， 1 动作
                    ccM.turtle_b=New_Msg->turtle_b;                      // 龟速模式, 0 无动作， 1 动作
                    ccM.lubricate_b=New_Msg->lubricate_b;                // 强制润滑, 0 无动作， 1 动作
                    ccM.firePrevent_b=New_Msg->firePrevent_b;            // 消防, 0 无动作， 1 动作
                    ccM.emergencyBrake_b = New_Msg->emergencyBrake_b;
                    ccM.lighting_b=New_Msg->lighting_b;                  // 照明, 0 无动作， 1 动作
                    ccM.horn_b=New_Msg->horn_b;                          // 喇叭, 0 无动作， 1 动作
                    ccM.leftLamp_b=New_Msg->leftLamp_b;
                    ccM.rightLamp_b=New_Msg->rightLamp_b;                // 转向灯, 0 无动作， 1 动作
                    ccM.bothLamp_b=New_Msg->bothLamp_b;                  // 双闪, 0 无动作， 1 动作 
                    ccM.asternLamp_b = New_Msg->asternLamp_b;            //倒车灯 ,0 无动作, 1 动作
                    my_pub.publish(ccM);
                } 
                else if(My_vehicleModel=="NTE200")
                {
                        my_project_test::CmdFromControllerToCAN CCTC;
                       
                        CCTC.accel_pedal_cmd=New_Msg->throttle;                 //#油门控制量 0~100
                        CCTC.retard_pedal_cmd=New_Msg->electronic_break;        //#电缓行控制量 0~100
                        CCTC.gear_cmd=New_Msg->gear;				            //#目标档位指令 0-N 1-D 2-R
                        CCTC.brake_pedal_cmd=New_Msg->hydraulic_break;		    //#液压工作制动控制量 0~100
                        CCTC.lift_container_cmd	=New_Msg->dump_bed;             //0-保持 1-举升 2-降落 3-浮动
                        CCTC.load_brake_cmd	=New_Msg->loadBrake_b;              //#装载制动开关 0-不制动 1-制动
                        CCTC.park_brake_cmd =New_Msg->park_b;                   //#驻车制动开关 0-不制动 1-制动
                        CCTC.target_angle_of_control_wheel=New_Msg->steerAngle;	//#左前轮控制轮转向角 -35~35 deg
                        my_pub.publish(CCTC);
                       
                        my_project_test::CmdFromDecisionToCAN CDTC;
                        CDTC.horn_cmd                =  New_Msg->horn_b;                  //# 喇叭控制量 0/1/2/3 0：不响，1-3代表响1~3声；交通路口鸣笛
                        CDTC.high_beam_switch        =  New_Msg->high_beam_switch; 		  //# 远光灯开关,false-关 true-开
                        CDTC.dipped_headlight_switch =  New_Msg->dipped_headlight_switch; //# 近光灯开关,false-关 true-开
                        CDTC.fog_lamp_switch         =  New_Msg->fog_lamp_switch;	      //# 雾灯,false-关 true-开
                        CDTC.night_light_swith       =  New_Msg->lighting_b;              //# 夜行灯,false-关 true-开
                        CDTC.left_turn_light_switch  =  New_Msg->leftLamp_b;              //# 左转灯,false-关 true-开
                        CDTC.right_turn_light_switch =  New_Msg->rightLamp_b;	          //# 右转灯,false-关 true-开
                        CDTC.double_flash_switch     =  New_Msg->bothLamp_b;              //# 双闪,false-关 true-开
                        CDTC.truck_start_switch      =  0;
                        CDTC.truck_turn_off_switch   =  0;
                        my_pub_2.publish(CDTC);

                        my_project_test::CmdFromSecurityToCAN CSTC;
                        CSTC.emergency_brake_cmd = 0;
                        CSTC.emergency_brake_cmd = New_Msg->emergencyBrake_b;          //#紧急制动 0：解除，1：实施，发生紧急事件时实施，执行层实施100%电缓行+100%液压制动
                        my_pub_3.publish(CSTC);
                }
                Update_Flag=0;
            }
            ros::spinOnce();
            usleep(20000);
        }
    }
    else if(CurChannel.compare("Can_Shark")==0)
    {
        struct  can_frame Rec_can;
        while(run_flag)
        {
            read(Sock_id, &Rec_can, sizeof(Rec_can));
            //canToUiMsg_t My_CTU; //接收数据并处理
            //if(uicb) uicb(&My_CTU); 
            usleep(20000);
        }
    } 
    pthread_exit(NULL);
}

void Signal_handle(int signum)
{
    if(signum<0)
    {
        cout<<"Signal Error!";
    }
    if(signum==SIGQUIT || signum==SIGINT)
    {
        run_flag=0;
    }
}

/**
 * @brief      Determines ability to adapter initialize.
 * @param[in]  recvCallback  The receive callback
 * @return     True if able to adapter initialize, False otherwise.
 */
int canAdapterInit(int argc,char** argv,recv_cb_t uicallback)
{
    rec_ui_cb = uicallback;
    run_flag=1;
    if(CurChannel.compare("ROS")==0)
    {
        ros::init(argc,argv,"UICommCan");
    }
    else if(CurChannel.compare("Can_Shark")==0)
    { 
        struct sockaddr_can addr;
        struct ifreq ifq;
        Sock_id = socket(PF_CAN, SOCK_RAW, CAN_RAW);//创建 SocketCAN 套接字
        strcpy(ifq.ifr_name,"can0");
        ioctl(Sock_id,SIOCGIFINDEX,&ifq);
        addr.can_family=AF_CAN;
        addr.can_ifindex=ifq.ifr_ifindex;
        bind(Sock_id,(struct sockaddr *)&addr,sizeof(addr));//将套接字与can0 绑定
    }
    else
    {
        return 0;
    }
    signal(SIGINT,Signal_handle);
    signal(SIGQUIT,Signal_handle);
    if(pthread_create(&thid,NULL,pth_callback,NULL)==0) return 1;    
    else return 0;      
}

/**
 * @brief      Gets the vehicle supported.
 * @param      output: vMap  The v map
 * @return     The number of vehicle model supported.
 */
int getVehicleSupported(vehileSupported_t *vMap)
{
    string strtemp;
    vehileAttr_t vt;
    vMap->clear();
    vt.dump_bed_mode=1;   // 货箱举升模式，1=1~100%,2=（举升，保持，下降，浮动）
    vMap->insert(pair<string,vehileAttr_t>("MT4400",vt));
    vMap->insert(pair<string,vehileAttr_t>("930E",vt)); 
    vt.dump_bed_mode=2;
    vMap->insert(pair<string,vehileAttr_t>("NTE200",vt)); 
    return 3;
}

/**
 * @brief      Sets the vehicle testing.
 * @param[in]  vehicleModel  The vehicle model like "MT4400"
 * @return     True if success, False otherwise
 */
int setVehicleTesting(string vehicleModel)
{      
    if(vehicleModel.compare("MT4400")==0)
    {
        My_vehicleModel=vehicleModel;
        return 1;
    }
    else if(vehicleModel.compare("930E")==0) 
    {
        My_vehicleModel=vehicleModel;
        return 1;
    }
    else if(vehicleModel.compare("NTE200")==0) 
    {
        My_vehicleModel=vehicleModel;
        return 1;
    }
    else 
    {
        return 0;
    }      
}

/**
 * @brief      Sets the message channel.
 *
 * @param[in]  channel  The channel like "canshark" or "canros"
 *
 * @return     True if success, False otherwise
 */
int setMsgChannel(string channel)
{
    if(channel.compare("ROS")==0)
    {      
        CurChannel="ROS";
    }
    else if(channel.compare("Can_Shark")==0)
    {
        CurChannel="Can_Shark";
    }
    return 0;
}

/**
 * @brief      Send to can adapter.
 * @param      input msg   The message
 * @return     True if success, False otherwise
 */
int sendToCanAdapter(uiToCanMsg_t &msg)
{
    if(CurChannel.compare("ROS")==0)
    {  
        Update_Flag=1;
        New_Msg = &msg;
    }
    else if(CurChannel.compare("Can_Shark")==0)
    {
        /* 数据发送
        struct  can_frame cf;
        cf.can_id= CAN_EFF_FLAG|0x123;
        cf.can_dlc= 8;
        cf.data[0]=msg.driverMode_b; 
        write(Sock_id, &cf, sizeof(struct can_frame));*/
    }
    else
    {
        return 0;
    }
    return 1;
}

void shutdown_ros(void)
{
    if(CurChannel.compare("ROS")==0)
    {
        ros::shutdown();
    }
}
