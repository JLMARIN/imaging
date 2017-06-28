/** @file
 *	@brief PPRZLink messages header built from messages.xml
 *	@see http://paparazziuav.org
 */


#ifndef _VAR_MESSAGES_telemetry_H_
#define _VAR_MESSAGES_telemetry_H_

#define PPRZLINK_PROTOCOL_VERSION "1.0"
#define PPRZLINK_PROTOCOL_VERSION_MAJOR 1
#define PPRZLINK_PROTOCOL_VERSION_MINOR 0

#ifdef __cplusplus
extern "C" {
#endif

#include "pprzlink/pprzlink_device.h"
#include "pprzlink/pprzlink_transport.h"
#include "pprzlink/pprzlink_utils.h"

#ifndef PPRZLINK_ENABLE_FD
#define PPRZLINK_ENABLE_FD FALSE
#endif

// dummy fd to save ROM if this is not used
#if !PPRZLINK_ENABLE_FD
#define _FD 0
#define _FD_ADDR 0
#else
#define _FD_ADDR &_FD
#endif

#if DOWNLINK
#define DL_AUTOPILOT_VERSION 1
#define PPRZ_MSG_ID_AUTOPILOT_VERSION 1
#define DL_ALIVE 2
#define PPRZ_MSG_ID_ALIVE 2
#define DL_PONG 3
#define PPRZ_MSG_ID_PONG 3
#define DL_TAKEOFF 4
#define PPRZ_MSG_ID_TAKEOFF 4
#define DL_ARDRONE_NAVDATA 5
#define PPRZ_MSG_ID_ARDRONE_NAVDATA 5
#define DL_ATTITUDE 6
#define PPRZ_MSG_ID_ATTITUDE 6
#define DL_IR_SENSORS 7
#define PPRZ_MSG_ID_IR_SENSORS 7
#define DL_GPS 8
#define PPRZ_MSG_ID_GPS 8
#define DL_NAVIGATION_REF 9
#define PPRZ_MSG_ID_NAVIGATION_REF 9
#define DL_NAVIGATION 10
#define PPRZ_MSG_ID_NAVIGATION 10
#define DL_PPRZ_MODE 11
#define PPRZ_MSG_ID_PPRZ_MODE 11
#define DL_BAT 12
#define PPRZ_MSG_ID_BAT 12
#define DL_DEBUG_MCU_LINK 13
#define PPRZ_MSG_ID_DEBUG_MCU_LINK 13
#define DL_CALIBRATION 14
#define PPRZ_MSG_ID_CALIBRATION 14
#define DL_SETTINGS 15
#define PPRZ_MSG_ID_SETTINGS 15
#define DL_DESIRED 16
#define PPRZ_MSG_ID_DESIRED 16
#define DL_GPS_SOL 17
#define PPRZ_MSG_ID_GPS_SOL 17
#define DL_ADC_GENERIC 18
#define PPRZ_MSG_ID_ADC_GENERIC 18
#define DL_TEST_FORMAT 19
#define PPRZ_MSG_ID_TEST_FORMAT 19
#define DL_CAM 20
#define PPRZ_MSG_ID_CAM 20
#define DL_CIRCLE 21
#define PPRZ_MSG_ID_CIRCLE 21
#define DL_SEGMENT 22
#define PPRZ_MSG_ID_SEGMENT 22
#define DL_VECTORNAV_INFO 23
#define PPRZ_MSG_ID_VECTORNAV_INFO 23
#define DL_HYBRID_GUIDANCE 24
#define PPRZ_MSG_ID_HYBRID_GUIDANCE 24
#define DL_SVINFO 25
#define PPRZ_MSG_ID_SVINFO 25
#define DL_DEBUG 26
#define PPRZ_MSG_ID_DEBUG 26
#define DL_SURVEY 27
#define PPRZ_MSG_ID_SURVEY 27
#define DL_RSSI 28
#define PPRZ_MSG_ID_RSSI 28
#define DL_RANGEFINDER 29
#define PPRZ_MSG_ID_RANGEFINDER 29
#define DL_DATALINK_REPORT 30
#define PPRZ_MSG_ID_DATALINK_REPORT 30
#define DL_DL_VALUE 31
#define PPRZ_MSG_ID_DL_VALUE 31
#define DL_MARK 32
#define PPRZ_MSG_ID_MARK 32
#define DL_SYS_MON 33
#define PPRZ_MSG_ID_SYS_MON 33
#define DL_MOTOR 34
#define PPRZ_MSG_ID_MOTOR 34
#define DL_WP_MOVED 35
#define PPRZ_MSG_ID_WP_MOVED 35
#define DL_MKK 36
#define PPRZ_MSG_ID_MKK 36
#define DL_ENERGY 37
#define PPRZ_MSG_ID_ENERGY 37
#define DL_WALDO_MSG 38
#define PPRZ_MSG_ID_WALDO_MSG 38
#define DL_WALDO_DEBUG_MSG 39
#define PPRZ_MSG_ID_WALDO_DEBUG_MSG 39
#define DL_SPEED_LOOP 40
#define PPRZ_MSG_ID_SPEED_LOOP 40
#define DL_ALT_KALMAN 41
#define PPRZ_MSG_ID_ALT_KALMAN 41
#define DL_ESTIMATOR 42
#define PPRZ_MSG_ID_ESTIMATOR 42
#define DL_TUNE_ROLL 43
#define PPRZ_MSG_ID_TUNE_ROLL 43
#define DL_BARO_MS5534A 44
#define PPRZ_MSG_ID_BARO_MS5534A 44
#define DL_PRESSURE 45
#define PPRZ_MSG_ID_PRESSURE 45
#define DL_BARO_WORDS 46
#define PPRZ_MSG_ID_BARO_WORDS 46
#define DL_WP_MOVED_LLA 47
#define PPRZ_MSG_ID_WP_MOVED_LLA 47
#define DL_CHRONO 48
#define PPRZ_MSG_ID_CHRONO 48
#define DL_WP_MOVED_ENU 49
#define PPRZ_MSG_ID_WP_MOVED_ENU 49
#define DL_WINDTURBINE_STATUS_ 50
#define PPRZ_MSG_ID_WINDTURBINE_STATUS_ 50
#define DL_RC_3CH_ 51
#define PPRZ_MSG_ID_RC_3CH_ 51
#define DL_MPPT 52
#define PPRZ_MSG_ID_MPPT 52
#define DL_DEBUG_IR_I2C 53
#define PPRZ_MSG_ID_DEBUG_IR_I2C 53
#define DL_AIRSPEED 54
#define PPRZ_MSG_ID_AIRSPEED 54
#define DL_XSENS 55
#define PPRZ_MSG_ID_XSENS 55
#define DL_BARO_ETS 56
#define PPRZ_MSG_ID_BARO_ETS 56
#define DL_AIRSPEED_ETS 57
#define PPRZ_MSG_ID_AIRSPEED_ETS 57
#define DL_PBN 58
#define PPRZ_MSG_ID_PBN 58
#define DL_GPS_LLA 59
#define PPRZ_MSG_ID_GPS_LLA 59
#define DL_H_CTL_A 60
#define PPRZ_MSG_ID_H_CTL_A 60
#define DL_TURB_PRESSURE_RAW 61
#define PPRZ_MSG_ID_TURB_PRESSURE_RAW 61
#define DL_TURB_PRESSURE_VOLTAGE 62
#define PPRZ_MSG_ID_TURB_PRESSURE_VOLTAGE 62
#define DL_CAM_POINT 63
#define PPRZ_MSG_ID_CAM_POINT 63
#define DL_DC_INFO 64
#define PPRZ_MSG_ID_DC_INFO 64
#define DL_AMSYS_BARO 65
#define PPRZ_MSG_ID_AMSYS_BARO 65
#define DL_AMSYS_AIRSPEED 66
#define PPRZ_MSG_ID_AMSYS_AIRSPEED 66
#define DL_FLIGHT_BENCHMARK 67
#define PPRZ_MSG_ID_FLIGHT_BENCHMARK 67
#define DL_MPL3115_BARO 68
#define PPRZ_MSG_ID_MPL3115_BARO 68
#define DL_AOA 69
#define PPRZ_MSG_ID_AOA 69
#define DL_XTEND_RSSI 70
#define PPRZ_MSG_ID_XTEND_RSSI 70
#define DL_SUPERBITRF 72
#define PPRZ_MSG_ID_SUPERBITRF 72
#define DL_GX3_INFO 73
#define PPRZ_MSG_ID_GX3_INFO 73
#define DL_EXPLAIN 74
#define PPRZ_MSG_ID_EXPLAIN 74
#define DL_VIDEO_TELEMETRY 75
#define PPRZ_MSG_ID_VIDEO_TELEMETRY 75
#define DL_VF_UPDATE 76
#define PPRZ_MSG_ID_VF_UPDATE 76
#define DL_VF_PREDICT 77
#define PPRZ_MSG_ID_VF_PREDICT 77
#define DL_INV_FILTER 78
#define PPRZ_MSG_ID_INV_FILTER 78
#define DL_MISSION_STATUS 79
#define PPRZ_MSG_ID_MISSION_STATUS 79
#define DL_CROSS_TRACK_ERROR 80
#define PPRZ_MSG_ID_CROSS_TRACK_ERROR 80
#define DL_GENERIC_COM 81
#define PPRZ_MSG_ID_GENERIC_COM 81
#define DL_FORMATION_SLOT_TM 82
#define PPRZ_MSG_ID_FORMATION_SLOT_TM 82
#define DL_FORMATION_STATUS_TM 83
#define PPRZ_MSG_ID_FORMATION_STATUS_TM 83
#define DL_BMP_STATUS 84
#define PPRZ_MSG_ID_BMP_STATUS 84
#define DL_MLX_STATUS 85
#define PPRZ_MSG_ID_MLX_STATUS 85
#define DL_TMP_STATUS 86
#define PPRZ_MSG_ID_TMP_STATUS 86
#define DL_WIND_INFO_RET 87
#define PPRZ_MSG_ID_WIND_INFO_RET 87
#define DL_SCP_STATUS 88
#define PPRZ_MSG_ID_SCP_STATUS 88
#define DL_SHT_STATUS 89
#define PPRZ_MSG_ID_SHT_STATUS 89
#define DL_ENOSE_STATUS 90
#define PPRZ_MSG_ID_ENOSE_STATUS 90
#define DL_DPICCO_STATUS 91
#define PPRZ_MSG_ID_DPICCO_STATUS 91
#define DL_ANTENNA_DEBUG 92
#define PPRZ_MSG_ID_ANTENNA_DEBUG 92
#define DL_ANTENNA_STATUS 93
#define PPRZ_MSG_ID_ANTENNA_STATUS 93
#define DL_MOTOR_BENCH_STATUS 94
#define PPRZ_MSG_ID_MOTOR_BENCH_STATUS 94
#define DL_MOTOR_BENCH_STATIC 95
#define PPRZ_MSG_ID_MOTOR_BENCH_STATIC 95
#define DL_HIH_STATUS 96
#define PPRZ_MSG_ID_HIH_STATUS 96
#define DL_TEMT_STATUS 97
#define PPRZ_MSG_ID_TEMT_STATUS 97
#define DL_GP2Y_STATUS 98
#define PPRZ_MSG_ID_GP2Y_STATUS 98
#define DL_SHT_I2C_SERIAL 99
#define PPRZ_MSG_ID_SHT_I2C_SERIAL 99
#define DL_PPM 100
#define PPRZ_MSG_ID_PPM 100
#define DL_RC 101
#define PPRZ_MSG_ID_RC 101
#define DL_COMMANDS 102
#define PPRZ_MSG_ID_COMMANDS 102
#define DL_FBW_STATUS 103
#define PPRZ_MSG_ID_FBW_STATUS 103
#define DL_ADC 104
#define PPRZ_MSG_ID_ADC 104
#define DL_ACTUATORS 105
#define PPRZ_MSG_ID_ACTUATORS 105
#define DL_BLUEGIGA 106
#define PPRZ_MSG_ID_BLUEGIGA 106
#define DL_PIKSI_HEARTBEAT 108
#define PPRZ_MSG_ID_PIKSI_HEARTBEAT 108
#define DL_MULTIGAZE_METERS 109
#define PPRZ_MSG_ID_MULTIGAZE_METERS 109
#define DL_DC_SHOT 110
#define PPRZ_MSG_ID_DC_SHOT 110
#define DL_TEST_BOARD_RESULTS 111
#define PPRZ_MSG_ID_TEST_BOARD_RESULTS 111
#define DL_MLX_SERIAL 113
#define PPRZ_MSG_ID_MLX_SERIAL 113
#define DL_PAYLOAD 114
#define PPRZ_MSG_ID_PAYLOAD 114
#define DL_HTM_STATUS 115
#define PPRZ_MSG_ID_HTM_STATUS 115
#define DL_BARO_MS5611 116
#define PPRZ_MSG_ID_BARO_MS5611 116
#define DL_MS5611_COEFF 117
#define PPRZ_MSG_ID_MS5611_COEFF 117
#define DL_ATMOSPHERE_CHARGE 118
#define PPRZ_MSG_ID_ATMOSPHERE_CHARGE 118
#define DL_SOLAR_RADIATION 119
#define PPRZ_MSG_ID_SOLAR_RADIATION 119
#define DL_TCAS_TA 120
#define PPRZ_MSG_ID_TCAS_TA 120
#define DL_TCAS_RA 121
#define PPRZ_MSG_ID_TCAS_RA 121
#define DL_TCAS_RESOLVED 122
#define PPRZ_MSG_ID_TCAS_RESOLVED 122
#define DL_TCAS_DEBUG 123
#define PPRZ_MSG_ID_TCAS_DEBUG 123
#define DL_POTENTIAL 124
#define PPRZ_MSG_ID_POTENTIAL 124
#define DL_VERTICAL_ENERGY 125
#define PPRZ_MSG_ID_VERTICAL_ENERGY 125
#define DL_TEMP_TCOUPLE 126
#define PPRZ_MSG_ID_TEMP_TCOUPLE 126
#define DL_SHT_I2C_STATUS 127
#define PPRZ_MSG_ID_SHT_I2C_STATUS 127
#define DL_CAMERA_SNAPSHOT 128
#define PPRZ_MSG_ID_CAMERA_SNAPSHOT 128
#define DL_TIMESTAMP 129
#define PPRZ_MSG_ID_TIMESTAMP 129
#define DL_STAB_ATTITUDE_FLOAT 130
#define PPRZ_MSG_ID_STAB_ATTITUDE_FLOAT 130
#define DL_IMU_GYRO_SCALED 131
#define PPRZ_MSG_ID_IMU_GYRO_SCALED 131
#define DL_IMU_ACCEL_SCALED 132
#define PPRZ_MSG_ID_IMU_ACCEL_SCALED 132
#define DL_IMU_MAG_SCALED 133
#define PPRZ_MSG_ID_IMU_MAG_SCALED 133
#define DL_FILTER 134
#define PPRZ_MSG_ID_FILTER 134
#define DL_FILTER2 135
#define PPRZ_MSG_ID_FILTER2 135
#define DL_RATE_LOOP 136
#define PPRZ_MSG_ID_RATE_LOOP 136
#define DL_FILTER_ALIGNER 137
#define PPRZ_MSG_ID_FILTER_ALIGNER 137
#define DL_AIRSPEED_MS45XX 138
#define PPRZ_MSG_ID_AIRSPEED_MS45XX 138
#define DL_FILTER_COR 139
#define PPRZ_MSG_ID_FILTER_COR 139
#define DL_STAB_ATTITUDE_INT 140
#define PPRZ_MSG_ID_STAB_ATTITUDE_INT 140
#define DL_STAB_ATTITUDE_REF_INT 141
#define PPRZ_MSG_ID_STAB_ATTITUDE_REF_INT 141
#define DL_STAB_ATTITUDE_REF_FLOAT 142
#define PPRZ_MSG_ID_STAB_ATTITUDE_REF_FLOAT 142
#define DL_ROTORCRAFT_CMD 143
#define PPRZ_MSG_ID_ROTORCRAFT_CMD 143
#define DL_GUIDANCE_H_INT 144
#define PPRZ_MSG_ID_GUIDANCE_H_INT 144
#define DL_VERT_LOOP 145
#define PPRZ_MSG_ID_VERT_LOOP 145
#define DL_HOVER_LOOP 146
#define PPRZ_MSG_ID_HOVER_LOOP 146
#define DL_ROTORCRAFT_FP 147
#define PPRZ_MSG_ID_ROTORCRAFT_FP 147
#define DL_TEMP_ADC 148
#define PPRZ_MSG_ID_TEMP_ADC 148
#define DL_GUIDANCE_H_REF_INT 149
#define PPRZ_MSG_ID_GUIDANCE_H_REF_INT 149
#define DL_ROTORCRAFT_TUNE_HOVER 150
#define PPRZ_MSG_ID_ROTORCRAFT_TUNE_HOVER 150
#define DL_INS_Z 151
#define PPRZ_MSG_ID_INS_Z 151
#define DL_PCAP01_STATUS 152
#define PPRZ_MSG_ID_PCAP01_STATUS 152
#define DL_GEIGER_COUNTER 153
#define PPRZ_MSG_ID_GEIGER_COUNTER 153
#define DL_INS_REF 154
#define PPRZ_MSG_ID_INS_REF 154
#define DL_GPS_INT 155
#define PPRZ_MSG_ID_GPS_INT 155
#define DL_AHRS_EULER_INT 156
#define PPRZ_MSG_ID_AHRS_EULER_INT 156
#define DL_AHRS_QUAT_INT 157
#define PPRZ_MSG_ID_AHRS_QUAT_INT 157
#define DL_AHRS_RMAT_INT 158
#define PPRZ_MSG_ID_AHRS_RMAT_INT 158
#define DL_ROTORCRAFT_NAV_STATUS 159
#define PPRZ_MSG_ID_ROTORCRAFT_NAV_STATUS 159
#define DL_ROTORCRAFT_RADIO_CONTROL 160
#define PPRZ_MSG_ID_ROTORCRAFT_RADIO_CONTROL 160
#define DL_VFF_EXTENDED 161
#define PPRZ_MSG_ID_VFF_EXTENDED 161
#define DL_VFF 162
#define PPRZ_MSG_ID_VFF 162
#define DL_GEO_MAG 163
#define PPRZ_MSG_ID_GEO_MAG 163
#define DL_HFF 164
#define PPRZ_MSG_ID_HFF 164
#define DL_HFF_DBG 165
#define PPRZ_MSG_ID_HFF_DBG 165
#define DL_HFF_GPS 166
#define PPRZ_MSG_ID_HFF_GPS 166
#define DL_INS_SONAR 167
#define PPRZ_MSG_ID_INS_SONAR 167
#define DL_ROTORCRAFT_CAM 168
#define PPRZ_MSG_ID_ROTORCRAFT_CAM 168
#define DL_AHRS_REF_QUAT 169
#define PPRZ_MSG_ID_AHRS_REF_QUAT 169
#define DL_EKF7_XHAT 170
#define PPRZ_MSG_ID_EKF7_XHAT 170
#define DL_EKF7_Y 171
#define PPRZ_MSG_ID_EKF7_Y 171
#define DL_EKF7_P_DIAG 172
#define PPRZ_MSG_ID_EKF7_P_DIAG 172
#define DL_AHRS_EULER 173
#define PPRZ_MSG_ID_AHRS_EULER 173
#define DL_AHRS_MEASUREMENT_EULER 174
#define PPRZ_MSG_ID_AHRS_MEASUREMENT_EULER 174
#define DL_WT 175
#define PPRZ_MSG_ID_WT 175
#define DL_CSC_CAN_DEBUG 176
#define PPRZ_MSG_ID_CSC_CAN_DEBUG 176
#define DL_CSC_CAN_MSG 177
#define PPRZ_MSG_ID_CSC_CAN_MSG 177
#define DL_AHRS_GYRO_BIAS_INT 178
#define PPRZ_MSG_ID_AHRS_GYRO_BIAS_INT 178
#define DL_AEROPROBE 179
#define PPRZ_MSG_ID_AEROPROBE 179
#define DL_FMS_TIME 180
#define PPRZ_MSG_ID_FMS_TIME 180
#define DL_LOADCELL 181
#define PPRZ_MSG_ID_LOADCELL 181
#define DL_FLA_DEBUG 182
#define PPRZ_MSG_ID_FLA_DEBUG 182
#define DL_BLMC_FAULT_STATUS 183
#define PPRZ_MSG_ID_BLMC_FAULT_STATUS 183
#define DL_BLMC_SPEEDS 184
#define PPRZ_MSG_ID_BLMC_SPEEDS 184
#define DL_AHRS_DEBUG_QUAT 185
#define PPRZ_MSG_ID_AHRS_DEBUG_QUAT 185
#define DL_BLMC_BUSVOLTS 186
#define PPRZ_MSG_ID_BLMC_BUSVOLTS 186
#define DL_SYSTEM_STATUS 187
#define PPRZ_MSG_ID_SYSTEM_STATUS 187
#define DL_DYNAMIXEL 188
#define PPRZ_MSG_ID_DYNAMIXEL 188
#define DL_RMAT_DEBUG 189
#define PPRZ_MSG_ID_RMAT_DEBUG 189
#define DL_SIMPLE_COMMANDS 190
#define PPRZ_MSG_ID_SIMPLE_COMMANDS 190
#define DL_VANE_SENSOR 191
#define PPRZ_MSG_ID_VANE_SENSOR 191
#define DL_CONTROLLER_GAINS 192
#define PPRZ_MSG_ID_CONTROLLER_GAINS 192
#define DL_AHRS_LKF 193
#define PPRZ_MSG_ID_AHRS_LKF 193
#define DL_AHRS_LKF_DEBUG 194
#define PPRZ_MSG_ID_AHRS_LKF_DEBUG 194
#define DL_AHRS_LKF_ACC_DBG 195
#define PPRZ_MSG_ID_AHRS_LKF_ACC_DBG 195
#define DL_AHRS_LKF_MAG_DBG 196
#define PPRZ_MSG_ID_AHRS_LKF_MAG_DBG 196
#define DL_NPS_SENSORS_SCALED 197
#define PPRZ_MSG_ID_NPS_SENSORS_SCALED 197
#define DL_INS 198
#define PPRZ_MSG_ID_INS 198
#define DL_GPS_ERROR 199
#define PPRZ_MSG_ID_GPS_ERROR 199
#define DL_IMU_GYRO 200
#define PPRZ_MSG_ID_IMU_GYRO 200
#define DL_IMU_MAG 201
#define PPRZ_MSG_ID_IMU_MAG 201
#define DL_IMU_ACCEL 202
#define PPRZ_MSG_ID_IMU_ACCEL 202
#define DL_IMU_GYRO_RAW 203
#define PPRZ_MSG_ID_IMU_GYRO_RAW 203
#define DL_IMU_ACCEL_RAW 204
#define PPRZ_MSG_ID_IMU_ACCEL_RAW 204
#define DL_IMU_MAG_RAW 205
#define PPRZ_MSG_ID_IMU_MAG_RAW 205
#define DL_IMU_MAG_SETTINGS 206
#define PPRZ_MSG_ID_IMU_MAG_SETTINGS 206
#define DL_IMU_MAG_CURRENT_CALIBRATION 207
#define PPRZ_MSG_ID_IMU_MAG_CURRENT_CALIBRATION 207
#define DL_UART_ERRORS 208
#define PPRZ_MSG_ID_UART_ERRORS 208
#define DL_IMU_GYRO_LP 209
#define PPRZ_MSG_ID_IMU_GYRO_LP 209
#define DL_IMU_PRESSURE 210
#define PPRZ_MSG_ID_IMU_PRESSURE 210
#define DL_IMU_HS_GYRO 211
#define PPRZ_MSG_ID_IMU_HS_GYRO 211
#define DL_TEST_PASSTHROUGH_STATUS 212
#define PPRZ_MSG_ID_TEST_PASSTHROUGH_STATUS 212
#define DL_TUNE_VERT 213
#define PPRZ_MSG_ID_TUNE_VERT 213
#define DL_MF_DAQ_STATE 214
#define PPRZ_MSG_ID_MF_DAQ_STATE 214
#define DL_INFO_MSG 215
#define PPRZ_MSG_ID_INFO_MSG 215
#define DL_STAB_ATTITUDE_INDI 216
#define PPRZ_MSG_ID_STAB_ATTITUDE_INDI 216
#define DL_BEBOP_ACTUATORS 218
#define PPRZ_MSG_ID_BEBOP_ACTUATORS 218
#define DL_WEATHER 219
#define PPRZ_MSG_ID_WEATHER 219
#define DL_IMU_TURNTABLE 220
#define PPRZ_MSG_ID_IMU_TURNTABLE 220
#define DL_BARO_RAW 221
#define PPRZ_MSG_ID_BARO_RAW 221
#define DL_AIR_DATA 222
#define PPRZ_MSG_ID_AIR_DATA 222
#define DL_AMSL 223
#define PPRZ_MSG_ID_AMSL 223
#define DL_DIVERGENCE 224
#define PPRZ_MSG_ID_DIVERGENCE 224
#define DL_VIDEO_SYNC 225
#define PPRZ_MSG_ID_VIDEO_SYNC 225
#define DL_PERIODIC_TELEMETRY_ERR 226
#define PPRZ_MSG_ID_PERIODIC_TELEMETRY_ERR 226
#define DL_TIME 227
#define PPRZ_MSG_ID_TIME 227
#define DL_OPTIC_FLOW_EST 228
#define PPRZ_MSG_ID_OPTIC_FLOW_EST 228
#define DL_STEREO_IMG 229
#define PPRZ_MSG_ID_STEREO_IMG 229
#define DL_ROTORCRAFT_STATUS 231
#define PPRZ_MSG_ID_ROTORCRAFT_STATUS 231
#define DL_STATE_FILTER_STATUS 232
#define PPRZ_MSG_ID_STATE_FILTER_STATUS 232
#define DL_PX4FLOW 233
#define PPRZ_MSG_ID_PX4FLOW 233
#define DL_OPTICFLOW 234
#define PPRZ_MSG_ID_OPTICFLOW 234
#define DL_VISUALTARGET 235
#define PPRZ_MSG_ID_VISUALTARGET 235
#define DL_SONAR 236
#define PPRZ_MSG_ID_SONAR 236
#define DL_PAYLOAD_FLOAT 237
#define PPRZ_MSG_ID_PAYLOAD_FLOAT 237
#define DL_NPS_POS_LLH 238
#define PPRZ_MSG_ID_NPS_POS_LLH 238
#define DL_NPS_RPMS 239
#define PPRZ_MSG_ID_NPS_RPMS 239
#define DL_NPS_SPEED_POS 240
#define PPRZ_MSG_ID_NPS_SPEED_POS 240
#define DL_NPS_RATE_ATTITUDE 241
#define PPRZ_MSG_ID_NPS_RATE_ATTITUDE 241
#define DL_NPS_GYRO_BIAS 242
#define PPRZ_MSG_ID_NPS_GYRO_BIAS 242
#define DL_NPS_RANGE_METER 243
#define PPRZ_MSG_ID_NPS_RANGE_METER 243
#define DL_NPS_WIND 244
#define PPRZ_MSG_ID_NPS_WIND 244
#define DL_ESC 245
#define PPRZ_MSG_ID_ESC 245
#define DL_RTOS_MON 246
#define PPRZ_MSG_ID_RTOS_MON 246
#define DL_PPRZ_DEBUG 247
#define PPRZ_MSG_ID_PPRZ_DEBUG 247
#define DL_NPS_ACCEL_LTP 248
#define PPRZ_MSG_ID_NPS_ACCEL_LTP 248
#define DL_LOOSE_INS_GPS 249
#define PPRZ_MSG_ID_LOOSE_INS_GPS 249
#define DL_AFL_COEFFS 250
#define PPRZ_MSG_ID_AFL_COEFFS 250
#define DL_GPS_SMALL 252
#define PPRZ_MSG_ID_GPS_SMALL 252
#define DL_I2C_ERRORS 253
#define PPRZ_MSG_ID_I2C_ERRORS 253
#define DL_RDYB_TRAJECTORY 254
#define PPRZ_MSG_ID_RDYB_TRAJECTORY 254
#define DL_HENRY_GNSS 255
#define PPRZ_MSG_ID_HENRY_GNSS 255
#define DL_MSG_telemetry_NB 249


#define DOWNLINK_SEND_AUTOPILOT_VERSION(_trans, _dev, version, nb_desc, desc) pprz_msg_send_AUTOPILOT_VERSION(&((_trans).trans_tx), &((_dev).device), AC_ID, version, nb_desc, desc)
static inline void pprz_msg_send_AUTOPILOT_VERSION(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_version, uint8_t nb_desc, char *_desc) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+1+nb_desc*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+1+nb_desc*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+1+nb_desc*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AUTOPILOT_VERSION, "AUTOPILOT_VERSION");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _version, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_desc, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_CHAR, DL_FORMAT_ARRAY, (void *) _desc, nb_desc*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ALIVE(_trans, _dev, nb_md5sum, md5sum) pprz_msg_send_ALIVE(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_md5sum, md5sum)
static inline void pprz_msg_send_ALIVE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_md5sum, uint8_t *_md5sum) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_md5sum*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_md5sum*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_md5sum*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ALIVE, "ALIVE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_md5sum, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _md5sum, nb_md5sum*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_PONG(_trans, _dev) pprz_msg_send_PONG(&((_trans).trans_tx), &((_dev).device), AC_ID)
static inline void pprz_msg_send_PONG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_PONG, "PONG");
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TAKEOFF(_trans, _dev, cpu_time) pprz_msg_send_TAKEOFF(&((_trans).trans_tx), &((_dev).device), AC_ID, cpu_time)
static inline void pprz_msg_send_TAKEOFF(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_cpu_time) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TAKEOFF, "TAKEOFF");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _cpu_time, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ARDRONE_NAVDATA(_trans, _dev, taille, nu_trame, ax, ay, az, vx, vy, vz, temperature_acc, temperature_gyro, ultrasound, us_debut_echo, us_fin_echo, us_association_echo, us_distance_echo, us_curve_time, us_curve_value, us_curve_ref, nb_echo, sum_echo, gradient, flag_echo_ini, pressure, temperature_pressure, mx, my, mz, chksum, checksum_errors) pprz_msg_send_ARDRONE_NAVDATA(&((_trans).trans_tx), &((_dev).device), AC_ID, taille, nu_trame, ax, ay, az, vx, vy, vz, temperature_acc, temperature_gyro, ultrasound, us_debut_echo, us_fin_echo, us_association_echo, us_distance_echo, us_curve_time, us_curve_value, us_curve_ref, nb_echo, sum_echo, gradient, flag_echo_ini, pressure, temperature_pressure, mx, my, mz, chksum, checksum_errors)
static inline void pprz_msg_send_ARDRONE_NAVDATA(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_taille, uint16_t *_nu_trame, uint16_t *_ax, uint16_t *_ay, uint16_t *_az, int16_t *_vx, int16_t *_vy, int16_t *_vz, uint16_t *_temperature_acc, uint16_t *_temperature_gyro, uint16_t *_ultrasound, uint16_t *_us_debut_echo, uint16_t *_us_fin_echo, uint16_t *_us_association_echo, uint16_t *_us_distance_echo, uint16_t *_us_curve_time, uint16_t *_us_curve_value, uint16_t *_us_curve_ref, uint16_t *_nb_echo, uint32_t *_sum_echo, int16_t *_gradient, uint16_t *_flag_echo_ini, int32_t *_pressure, uint16_t *_temperature_pressure, int16_t *_mx, int16_t *_my, int16_t *_mz, uint16_t *_chksum, uint32_t *_checksum_errors) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+4+2+2+4+2+2+2+2+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+4+2+2+4+2+2+2+2+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+4+2+2+4+2+2+2+2+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ARDRONE_NAVDATA, "ARDRONE_NAVDATA");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _taille, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _nu_trame, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _ax, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _ay, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _az, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _vx, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _vy, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _vz, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _temperature_acc, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _temperature_gyro, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _ultrasound, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _us_debut_echo, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _us_fin_echo, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _us_association_echo, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _us_distance_echo, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _us_curve_time, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _us_curve_value, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _us_curve_ref, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _nb_echo, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _sum_echo, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _gradient, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _flag_echo_ini, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _pressure, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _temperature_pressure, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _mx, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _my, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _mz, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _chksum, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _checksum_errors, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ATTITUDE(_trans, _dev, phi, psi, theta) pprz_msg_send_ATTITUDE(&((_trans).trans_tx), &((_dev).device), AC_ID, phi, psi, theta)
static inline void pprz_msg_send_ATTITUDE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_phi, float *_psi, float *_theta) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ATTITUDE, "ATTITUDE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _theta, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IR_SENSORS(_trans, _dev, ir1, ir2, longitudinal, lateral, vertical) pprz_msg_send_IR_SENSORS(&((_trans).trans_tx), &((_dev).device), AC_ID, ir1, ir2, longitudinal, lateral, vertical)
static inline void pprz_msg_send_IR_SENSORS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_ir1, int16_t *_ir2, int16_t *_longitudinal, int16_t *_lateral, int16_t *_vertical) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IR_SENSORS, "IR_SENSORS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _ir1, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _ir2, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _longitudinal, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _lateral, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _vertical, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GPS(_trans, _dev, mode, utm_east, utm_north, course, alt, speed, climb, week, itow, utm_zone, gps_nb_err) pprz_msg_send_GPS(&((_trans).trans_tx), &((_dev).device), AC_ID, mode, utm_east, utm_north, course, alt, speed, climb, week, itow, utm_zone, gps_nb_err)
static inline void pprz_msg_send_GPS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_mode, int32_t *_utm_east, int32_t *_utm_north, int16_t *_course, int32_t *_alt, uint16_t *_speed, int16_t *_climb, uint16_t *_week, uint32_t *_itow, uint8_t *_utm_zone, uint8_t *_gps_nb_err) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+4+4+2+4+2+2+2+4+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+4+4+2+4+2+2+2+4+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+4+4+2+4+2+2+2+4+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GPS, "GPS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _utm_east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _utm_north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _course, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _speed, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _climb, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _week, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _itow, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _utm_zone, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _gps_nb_err, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_NAVIGATION_REF(_trans, _dev, utm_east, utm_north, utm_zone, ground_alt) pprz_msg_send_NAVIGATION_REF(&((_trans).trans_tx), &((_dev).device), AC_ID, utm_east, utm_north, utm_zone, ground_alt)
static inline void pprz_msg_send_NAVIGATION_REF(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_utm_east, int32_t *_utm_north, uint8_t *_utm_zone, float *_ground_alt) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+1+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+1+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+1+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_NAVIGATION_REF, "NAVIGATION_REF");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _utm_east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _utm_north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _utm_zone, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ground_alt, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_NAVIGATION(_trans, _dev, cur_block, cur_stage, pos_x, pos_y, dist_wp, dist_home, circle_count, oval_count) pprz_msg_send_NAVIGATION(&((_trans).trans_tx), &((_dev).device), AC_ID, cur_block, cur_stage, pos_x, pos_y, dist_wp, dist_home, circle_count, oval_count)
static inline void pprz_msg_send_NAVIGATION(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_cur_block, uint8_t *_cur_stage, float *_pos_x, float *_pos_y, float *_dist_wp, float *_dist_home, uint8_t *_circle_count, uint8_t *_oval_count) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_NAVIGATION, "NAVIGATION");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _cur_block, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _cur_stage, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pos_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pos_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _dist_wp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _dist_home, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _circle_count, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _oval_count, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_PPRZ_MODE(_trans, _dev, ap_mode, ap_gaz, ap_lateral, ap_horizontal, if_calib_mode, mcu1_status) pprz_msg_send_PPRZ_MODE(&((_trans).trans_tx), &((_dev).device), AC_ID, ap_mode, ap_gaz, ap_lateral, ap_horizontal, if_calib_mode, mcu1_status)
static inline void pprz_msg_send_PPRZ_MODE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ap_mode, uint8_t *_ap_gaz, uint8_t *_ap_lateral, uint8_t *_ap_horizontal, uint8_t *_if_calib_mode, uint8_t *_mcu1_status) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1+1+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1+1+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1+1+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_PPRZ_MODE, "PPRZ_MODE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ap_mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ap_gaz, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ap_lateral, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ap_horizontal, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _if_calib_mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mcu1_status, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_BAT(_trans, _dev, throttle, voltage, amps, flight_time, kill_auto_throttle, block_time, stage_time, energy) pprz_msg_send_BAT(&((_trans).trans_tx), &((_dev).device), AC_ID, throttle, voltage, amps, flight_time, kill_auto_throttle, block_time, stage_time, energy)
static inline void pprz_msg_send_BAT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_throttle, uint16_t *_voltage, int16_t *_amps, uint16_t *_flight_time, uint8_t *_kill_auto_throttle, uint16_t *_block_time, uint16_t *_stage_time, int16_t *_energy) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+2+1+2+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+2+1+2+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+2+1+2+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_BAT, "BAT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _throttle, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _voltage, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _amps, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _flight_time, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _kill_auto_throttle, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _block_time, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _stage_time, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _energy, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_DEBUG_MCU_LINK(_trans, _dev, i2c_nb_err, i2c_mcu1_nb_err, ppm_rate) pprz_msg_send_DEBUG_MCU_LINK(&((_trans).trans_tx), &((_dev).device), AC_ID, i2c_nb_err, i2c_mcu1_nb_err, ppm_rate)
static inline void pprz_msg_send_DEBUG_MCU_LINK(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_i2c_nb_err, uint8_t *_i2c_mcu1_nb_err, uint8_t *_ppm_rate) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_DEBUG_MCU_LINK, "DEBUG_MCU_LINK");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _i2c_nb_err, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _i2c_mcu1_nb_err, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ppm_rate, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_CALIBRATION(_trans, _dev, climb_sum_err, climb_gaz_submode) pprz_msg_send_CALIBRATION(&((_trans).trans_tx), &((_dev).device), AC_ID, climb_sum_err, climb_gaz_submode)
static inline void pprz_msg_send_CALIBRATION(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_climb_sum_err, uint8_t *_climb_gaz_submode) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_CALIBRATION, "CALIBRATION");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _climb_sum_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _climb_gaz_submode, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SETTINGS(_trans, _dev, slider_1_val, slider_2_val) pprz_msg_send_SETTINGS(&((_trans).trans_tx), &((_dev).device), AC_ID, slider_1_val, slider_2_val)
static inline void pprz_msg_send_SETTINGS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_slider_1_val, float *_slider_2_val) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SETTINGS, "SETTINGS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _slider_1_val, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _slider_2_val, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_DESIRED(_trans, _dev, roll, pitch, course, x, y, altitude, climb, airspeed) pprz_msg_send_DESIRED(&((_trans).trans_tx), &((_dev).device), AC_ID, roll, pitch, course, x, y, altitude, climb, airspeed)
static inline void pprz_msg_send_DESIRED(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_roll, float *_pitch, float *_course, float *_x, float *_y, float *_altitude, float *_climb, float *_airspeed) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_DESIRED, "DESIRED");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _roll, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pitch, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _course, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _altitude, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _climb, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _airspeed, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GPS_SOL(_trans, _dev, Pacc, Sacc, PDOP, numSV) pprz_msg_send_GPS_SOL(&((_trans).trans_tx), &((_dev).device), AC_ID, Pacc, Sacc, PDOP, numSV)
static inline void pprz_msg_send_GPS_SOL(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_Pacc, uint32_t *_Sacc, uint16_t *_PDOP, uint8_t *_numSV) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+2+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+2+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+2+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GPS_SOL, "GPS_SOL");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _Pacc, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _Sacc, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _PDOP, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _numSV, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ADC_GENERIC(_trans, _dev, val1, val2) pprz_msg_send_ADC_GENERIC(&((_trans).trans_tx), &((_dev).device), AC_ID, val1, val2)
static inline void pprz_msg_send_ADC_GENERIC(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_val1, uint16_t *_val2) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ADC_GENERIC, "ADC_GENERIC");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _val1, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _val2, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TEST_FORMAT(_trans, _dev, val1, val2) pprz_msg_send_TEST_FORMAT(&((_trans).trans_tx), &((_dev).device), AC_ID, val1, val2)
static inline void pprz_msg_send_TEST_FORMAT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, double *_val1, float *_val2) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+8+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+8+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+8+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TEST_FORMAT, "TEST_FORMAT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _val1, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _val2, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_CAM(_trans, _dev, phi, theta, target_x, target_y) pprz_msg_send_CAM(&((_trans).trans_tx), &((_dev).device), AC_ID, phi, theta, target_x, target_y)
static inline void pprz_msg_send_CAM(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_phi, int16_t *_theta, int16_t *_target_x, int16_t *_target_y) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_CAM, "CAM");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _phi, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _theta, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _target_x, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _target_y, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_CIRCLE(_trans, _dev, center_east, center_north, radius) pprz_msg_send_CIRCLE(&((_trans).trans_tx), &((_dev).device), AC_ID, center_east, center_north, radius)
static inline void pprz_msg_send_CIRCLE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_center_east, float *_center_north, float *_radius) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_CIRCLE, "CIRCLE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _center_east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _center_north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _radius, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SEGMENT(_trans, _dev, segment_east_1, segment_north_1, segment_east_2, segment_north_2) pprz_msg_send_SEGMENT(&((_trans).trans_tx), &((_dev).device), AC_ID, segment_east_1, segment_north_1, segment_east_2, segment_north_2)
static inline void pprz_msg_send_SEGMENT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_segment_east_1, float *_segment_north_1, float *_segment_east_2, float *_segment_north_2) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SEGMENT, "SEGMENT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _segment_east_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _segment_north_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _segment_east_2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _segment_north_2, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_VECTORNAV_INFO(_trans, _dev, timestamp, chksm_error, hdr_error, counter, ins_status, ins_err, YprU1, YprU2, YprU3) pprz_msg_send_VECTORNAV_INFO(&((_trans).trans_tx), &((_dev).device), AC_ID, timestamp, chksm_error, hdr_error, counter, ins_status, ins_err, YprU1, YprU2, YprU3)
static inline void pprz_msg_send_VECTORNAV_INFO(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_timestamp, uint32_t *_chksm_error, uint32_t *_hdr_error, uint16_t *_counter, uint8_t *_ins_status, uint8_t *_ins_err, float *_YprU1, float *_YprU2, float *_YprU3) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+2+1+1+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+2+1+1+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+2+1+1+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_VECTORNAV_INFO, "VECTORNAV_INFO");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _timestamp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _chksm_error, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _hdr_error, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _counter, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ins_status, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ins_err, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _YprU1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _YprU2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _YprU3, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_HYBRID_GUIDANCE(_trans, _dev, pos_x, pos_y, speed_x, speed_y, wind_x, wind_y, pos_err_x, pos_err_y, speed_sp_x, speed_sp_y, norm_ref_speed, heading_diff, phi, theta, psi) pprz_msg_send_HYBRID_GUIDANCE(&((_trans).trans_tx), &((_dev).device), AC_ID, pos_x, pos_y, speed_x, speed_y, wind_x, wind_y, pos_err_x, pos_err_y, speed_sp_x, speed_sp_y, norm_ref_speed, heading_diff, phi, theta, psi)
static inline void pprz_msg_send_HYBRID_GUIDANCE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_pos_x, int32_t *_pos_y, int32_t *_speed_x, int32_t *_speed_y, int32_t *_wind_x, int32_t *_wind_y, int32_t *_pos_err_x, int32_t *_pos_err_y, int32_t *_speed_sp_x, int32_t *_speed_sp_y, int32_t *_norm_ref_speed, int32_t *_heading_diff, int32_t *_phi, int32_t *_theta, int32_t *_psi) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_HYBRID_GUIDANCE, "HYBRID_GUIDANCE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _pos_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _pos_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _speed_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _speed_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _wind_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _wind_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _pos_err_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _pos_err_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _speed_sp_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _speed_sp_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _norm_ref_speed, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _heading_diff, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _psi, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SVINFO(_trans, _dev, chn, SVID, Flags, QI, CNO, Elev, Azim) pprz_msg_send_SVINFO(&((_trans).trans_tx), &((_dev).device), AC_ID, chn, SVID, Flags, QI, CNO, Elev, Azim)
static inline void pprz_msg_send_SVINFO(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_chn, uint8_t *_SVID, uint8_t *_Flags, uint8_t *_QI, uint8_t *_CNO, int8_t *_Elev, int16_t *_Azim) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1+1+1+1+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1+1+1+1+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1+1+1+1+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SVINFO, "SVINFO");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _chn, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _SVID, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _Flags, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _QI, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _CNO, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _Elev, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _Azim, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_DEBUG(_trans, _dev, nb_msg, msg) pprz_msg_send_DEBUG(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_msg, msg)
static inline void pprz_msg_send_DEBUG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_msg, uint8_t *_msg) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_msg*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_msg*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_msg*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_DEBUG, "DEBUG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_msg, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _msg, nb_msg*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SURVEY(_trans, _dev, east, north, west, south) pprz_msg_send_SURVEY(&((_trans).trans_tx), &((_dev).device), AC_ID, east, north, west, south)
static inline void pprz_msg_send_SURVEY(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_east, float *_north, float *_west, float *_south) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SURVEY, "SURVEY");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _west, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _south, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_RSSI(_trans, _dev, rssi, tx_power) pprz_msg_send_RSSI(&((_trans).trans_tx), &((_dev).device), AC_ID, rssi, tx_power)
static inline void pprz_msg_send_RSSI(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_rssi, uint8_t *_tx_power) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_RSSI, "RSSI");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _rssi, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _tx_power, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_RANGEFINDER(_trans, _dev, range, z_dot, z_dot_sum_err, z_dot_setpoint, z_sum_err, z_setpoint, flying) pprz_msg_send_RANGEFINDER(&((_trans).trans_tx), &((_dev).device), AC_ID, range, z_dot, z_dot_sum_err, z_dot_setpoint, z_sum_err, z_setpoint, flying)
static inline void pprz_msg_send_RANGEFINDER(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_range, float *_z_dot, float *_z_dot_sum_err, float *_z_dot_setpoint, float *_z_sum_err, float *_z_setpoint, uint8_t *_flying) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_RANGEFINDER, "RANGEFINDER");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _range, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _z_dot, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _z_dot_sum_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _z_dot_setpoint, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _z_sum_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _z_setpoint, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _flying, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_DATALINK_REPORT(_trans, _dev, uplink_lost_time, uplink_nb_msgs, downlink_nb_msgs, downlink_rate, uplink_rate, downlink_ovrn) pprz_msg_send_DATALINK_REPORT(&((_trans).trans_tx), &((_dev).device), AC_ID, uplink_lost_time, uplink_nb_msgs, downlink_nb_msgs, downlink_rate, uplink_rate, downlink_ovrn)
static inline void pprz_msg_send_DATALINK_REPORT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_uplink_lost_time, uint16_t *_uplink_nb_msgs, uint16_t *_downlink_nb_msgs, uint16_t *_downlink_rate, uint16_t *_uplink_rate, uint8_t *_downlink_ovrn) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+2+2+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+2+2+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+2+2+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_DATALINK_REPORT, "DATALINK_REPORT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _uplink_lost_time, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _uplink_nb_msgs, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _downlink_nb_msgs, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _downlink_rate, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _uplink_rate, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _downlink_ovrn, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_DL_VALUE(_trans, _dev, index, value) pprz_msg_send_DL_VALUE(&((_trans).trans_tx), &((_dev).device), AC_ID, index, value)
static inline void pprz_msg_send_DL_VALUE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_index, float *_value) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_DL_VALUE, "DL_VALUE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _index, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _value, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MARK(_trans, _dev, ac_id, lat, long) pprz_msg_send_MARK(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, lat, long)
static inline void pprz_msg_send_MARK(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, float *_lat, float *_long) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MARK, "MARK");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _long, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SYS_MON(_trans, _dev, periodic_time, periodic_time_min, periodic_time_max, periodic_cycle, periodic_cycle_min, periodic_cycle_max, event_number, cpu_load) pprz_msg_send_SYS_MON(&((_trans).trans_tx), &((_dev).device), AC_ID, periodic_time, periodic_time_min, periodic_time_max, periodic_cycle, periodic_cycle_min, periodic_cycle_max, event_number, cpu_load)
static inline void pprz_msg_send_SYS_MON(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_periodic_time, uint16_t *_periodic_time_min, uint16_t *_periodic_time_max, uint16_t *_periodic_cycle, uint16_t *_periodic_cycle_min, uint16_t *_periodic_cycle_max, uint16_t *_event_number, uint8_t *_cpu_load) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+2+2+2+2+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+2+2+2+2+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+2+2+2+2+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SYS_MON, "SYS_MON");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _periodic_time, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _periodic_time_min, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _periodic_time_max, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _periodic_cycle, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _periodic_cycle_min, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _periodic_cycle_max, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _event_number, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _cpu_load, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MOTOR(_trans, _dev, rpm, current) pprz_msg_send_MOTOR(&((_trans).trans_tx), &((_dev).device), AC_ID, rpm, current)
static inline void pprz_msg_send_MOTOR(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_rpm, int32_t *_current) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MOTOR, "MOTOR");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _rpm, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _current, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_WP_MOVED(_trans, _dev, wp_id, utm_east, utm_north, alt, utm_zone) pprz_msg_send_WP_MOVED(&((_trans).trans_tx), &((_dev).device), AC_ID, wp_id, utm_east, utm_north, alt, utm_zone)
static inline void pprz_msg_send_WP_MOVED(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_wp_id, float *_utm_east, float *_utm_north, float *_alt, uint8_t *_utm_zone) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_WP_MOVED, "WP_MOVED");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _wp_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _utm_east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _utm_north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _utm_zone, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MKK(_trans, _dev, nr, rpm, current, temp) pprz_msg_send_MKK(&((_trans).trans_tx), &((_dev).device), AC_ID, nr, rpm, current, temp)
static inline void pprz_msg_send_MKK(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_nr, uint8_t *_rpm, uint8_t *_current, int8_t *_temp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MKK, "MKK");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _nr, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _rpm, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _current, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _temp, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ENERGY(_trans, _dev, bat, amp, energy, power) pprz_msg_send_ENERGY(&((_trans).trans_tx), &((_dev).device), AC_ID, bat, amp, energy, power)
static inline void pprz_msg_send_ENERGY(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_bat, float *_amp, uint16_t *_energy, float *_power) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ENERGY, "ENERGY");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _amp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _energy, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _power, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_WALDO_MSG(_trans, _dev, roll, yaw, pitch, fix, utm_east, utm_north, utm_zone, speed, week, itow, est_height) pprz_msg_send_WALDO_MSG(&((_trans).trans_tx), &((_dev).device), AC_ID, roll, yaw, pitch, fix, utm_east, utm_north, utm_zone, speed, week, itow, est_height)
static inline void pprz_msg_send_WALDO_MSG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_roll, float *_yaw, float *_pitch, uint8_t *_fix, int32_t *_utm_east, int32_t *_utm_north, uint8_t *_utm_zone, uint16_t *_speed, uint16_t *_week, uint32_t *_itow, float *_est_height) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+1+4+4+1+2+2+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+1+4+4+1+2+2+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+1+4+4+1+2+2+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_WALDO_MSG, "WALDO_MSG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _roll, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _yaw, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pitch, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _fix, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _utm_east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _utm_north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _utm_zone, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _speed, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _week, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _itow, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _est_height, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_WALDO_DEBUG_MSG(_trans, _dev, countupfast) pprz_msg_send_WALDO_DEBUG_MSG(&((_trans).trans_tx), &((_dev).device), AC_ID, countupfast)
static inline void pprz_msg_send_WALDO_DEBUG_MSG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_countupfast) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_WALDO_DEBUG_MSG, "WALDO_DEBUG_MSG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _countupfast, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SPEED_LOOP(_trans, _dev, ve_set_point, ve, vn_set_point, vn, north_sp, east_sp) pprz_msg_send_SPEED_LOOP(&((_trans).trans_tx), &((_dev).device), AC_ID, ve_set_point, ve, vn_set_point, vn, north_sp, east_sp)
static inline void pprz_msg_send_SPEED_LOOP(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_ve_set_point, float *_ve, float *_vn_set_point, float *_vn, float *_north_sp, float *_east_sp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SPEED_LOOP, "SPEED_LOOP");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ve_set_point, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ve, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _vn_set_point, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _vn, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _north_sp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _east_sp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ALT_KALMAN(_trans, _dev, p00, p01, p10, p11) pprz_msg_send_ALT_KALMAN(&((_trans).trans_tx), &((_dev).device), AC_ID, p00, p01, p10, p11)
static inline void pprz_msg_send_ALT_KALMAN(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_p00, float *_p01, float *_p10, float *_p11) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ALT_KALMAN, "ALT_KALMAN");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _p00, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _p01, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _p10, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _p11, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ESTIMATOR(_trans, _dev, z, z_dot) pprz_msg_send_ESTIMATOR(&((_trans).trans_tx), &((_dev).device), AC_ID, z, z_dot)
static inline void pprz_msg_send_ESTIMATOR(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_z, float *_z_dot) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ESTIMATOR, "ESTIMATOR");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _z, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _z_dot, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TUNE_ROLL(_trans, _dev, p, phi, phi_sp) pprz_msg_send_TUNE_ROLL(&((_trans).trans_tx), &((_dev).device), AC_ID, p, phi, phi_sp)
static inline void pprz_msg_send_TUNE_ROLL(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_p, float *_phi, float *_phi_sp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TUNE_ROLL, "TUNE_ROLL");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _phi_sp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_BARO_MS5534A(_trans, _dev, pressure, temp, alt) pprz_msg_send_BARO_MS5534A(&((_trans).trans_tx), &((_dev).device), AC_ID, pressure, temp, alt)
static inline void pprz_msg_send_BARO_MS5534A(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_pressure, uint16_t *_temp, float *_alt) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_BARO_MS5534A, "BARO_MS5534A");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _pressure, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _temp, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_PRESSURE(_trans, _dev, airspeed_adc, airspeed, altitude_adc, altitude) pprz_msg_send_PRESSURE(&((_trans).trans_tx), &((_dev).device), AC_ID, airspeed_adc, airspeed, altitude_adc, altitude)
static inline void pprz_msg_send_PRESSURE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_airspeed_adc, float *_airspeed, float *_altitude_adc, float *_altitude) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_PRESSURE, "PRESSURE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _airspeed_adc, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _airspeed, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _altitude_adc, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _altitude, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_BARO_WORDS(_trans, _dev, w1, w2, w3, w4) pprz_msg_send_BARO_WORDS(&((_trans).trans_tx), &((_dev).device), AC_ID, w1, w2, w3, w4)
static inline void pprz_msg_send_BARO_WORDS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_w1, uint16_t *_w2, uint16_t *_w3, uint16_t *_w4) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_BARO_WORDS, "BARO_WORDS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _w1, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _w2, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _w3, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _w4, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_WP_MOVED_LLA(_trans, _dev, wp_id, lat, lon, alt) pprz_msg_send_WP_MOVED_LLA(&((_trans).trans_tx), &((_dev).device), AC_ID, wp_id, lat, lon, alt)
static inline void pprz_msg_send_WP_MOVED_LLA(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_wp_id, int32_t *_lat, int32_t *_lon, int32_t *_alt) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_WP_MOVED_LLA, "WP_MOVED_LLA");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _wp_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_CHRONO(_trans, _dev, tag, time) pprz_msg_send_CHRONO(&((_trans).trans_tx), &((_dev).device), AC_ID, tag, time)
static inline void pprz_msg_send_CHRONO(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_tag, uint32_t *_time) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_CHRONO, "CHRONO");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _tag, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _time, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_WP_MOVED_ENU(_trans, _dev, wp_id, east, north, up) pprz_msg_send_WP_MOVED_ENU(&((_trans).trans_tx), &((_dev).device), AC_ID, wp_id, east, north, up)
static inline void pprz_msg_send_WP_MOVED_ENU(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_wp_id, int32_t *_east, int32_t *_north, int32_t *_up) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_WP_MOVED_ENU, "WP_MOVED_ENU");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _wp_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _up, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_WINDTURBINE_STATUS_(_trans, _dev, ac_id, tb_id, sync_itow, cycle_time) pprz_msg_send_WINDTURBINE_STATUS_(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, tb_id, sync_itow, cycle_time)
static inline void pprz_msg_send_WINDTURBINE_STATUS_(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_tb_id, uint32_t *_sync_itow, uint32_t *_cycle_time) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_WINDTURBINE_STATUS_, "WINDTURBINE_STATUS_");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _tb_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _sync_itow, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _cycle_time, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_RC_3CH_(_trans, _dev, throttle_mode, roll, pitch) pprz_msg_send_RC_3CH_(&((_trans).trans_tx), &((_dev).device), AC_ID, throttle_mode, roll, pitch)
static inline void pprz_msg_send_RC_3CH_(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_throttle_mode, int8_t *_roll, int8_t *_pitch) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_RC_3CH_, "RC_3CH_");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _throttle_mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _roll, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT8, DL_FORMAT_SCALAR, (void *) _pitch, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MPPT(_trans, _dev, nb_values, values) pprz_msg_send_MPPT(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_values, values)
static inline void pprz_msg_send_MPPT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_values, int16_t *_values) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_values*2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_values*2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_values*2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MPPT, "MPPT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_values, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_ARRAY, (void *) _values, nb_values*2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_DEBUG_IR_I2C(_trans, _dev, ir1, ir2, top) pprz_msg_send_DEBUG_IR_I2C(&((_trans).trans_tx), &((_dev).device), AC_ID, ir1, ir2, top)
static inline void pprz_msg_send_DEBUG_IR_I2C(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_ir1, int16_t *_ir2, int16_t *_top) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_DEBUG_IR_I2C, "DEBUG_IR_I2C");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _ir1, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _ir2, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _top, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AIRSPEED(_trans, _dev, airspeed, airspeed_sp, airspeed_cnt, groundspeed_sp) pprz_msg_send_AIRSPEED(&((_trans).trans_tx), &((_dev).device), AC_ID, airspeed, airspeed_sp, airspeed_cnt, groundspeed_sp)
static inline void pprz_msg_send_AIRSPEED(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_airspeed, float *_airspeed_sp, float *_airspeed_cnt, float *_groundspeed_sp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AIRSPEED, "AIRSPEED");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _airspeed, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _airspeed_sp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _airspeed_cnt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _groundspeed_sp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_XSENS(_trans, _dev, counter, p, q, r, phi, theta, psi, ax, ay, az, vx, vy, vz, lat, lon, alt, status, hour, min, sec, nanosec, year, month, day) pprz_msg_send_XSENS(&((_trans).trans_tx), &((_dev).device), AC_ID, counter, p, q, r, phi, theta, psi, ax, ay, az, vx, vy, vz, lat, lon, alt, status, hour, min, sec, nanosec, year, month, day)
static inline void pprz_msg_send_XSENS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_counter, float *_p, float *_q, float *_r, float *_phi, float *_theta, float *_psi, float *_ax, float *_ay, float *_az, float *_vx, float *_vy, float *_vz, float *_lat, float *_lon, float *_alt, uint8_t *_status, uint8_t *_hour, uint8_t *_min, uint8_t *_sec, uint32_t *_nanosec, uint16_t *_year, uint8_t *_month, uint8_t *_day) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+1+1+1+1+4+2+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+1+1+1+1+4+2+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+1+1+1+1+4+2+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_XSENS, "XSENS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _counter, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ax, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ay, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _az, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _vx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _vy, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _vz, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _status, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _hour, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _min, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _sec, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _nanosec, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _year, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _month, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _day, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_BARO_ETS(_trans, _dev, adc, offset, scaled) pprz_msg_send_BARO_ETS(&((_trans).trans_tx), &((_dev).device), AC_ID, adc, offset, scaled)
static inline void pprz_msg_send_BARO_ETS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_adc, uint16_t *_offset, float *_scaled) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_BARO_ETS, "BARO_ETS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _adc, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _offset, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _scaled, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AIRSPEED_ETS(_trans, _dev, adc, offset, scaled) pprz_msg_send_AIRSPEED_ETS(&((_trans).trans_tx), &((_dev).device), AC_ID, adc, offset, scaled)
static inline void pprz_msg_send_AIRSPEED_ETS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_adc, uint16_t *_offset, float *_scaled) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AIRSPEED_ETS, "AIRSPEED_ETS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _adc, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _offset, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _scaled, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_PBN(_trans, _dev, airspeed_adc, altitude_adc, airspeed, altitude, airspeed_offset, altitude_offset) pprz_msg_send_PBN(&((_trans).trans_tx), &((_dev).device), AC_ID, airspeed_adc, altitude_adc, airspeed, altitude, airspeed_offset, altitude_offset)
static inline void pprz_msg_send_PBN(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_airspeed_adc, uint16_t *_altitude_adc, float *_airspeed, float *_altitude, uint16_t *_airspeed_offset, uint16_t *_altitude_offset) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+4+4+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+4+4+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+4+4+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_PBN, "PBN");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _airspeed_adc, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _altitude_adc, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _airspeed, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _altitude, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _airspeed_offset, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _altitude_offset, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GPS_LLA(_trans, _dev, lat, lon, alt, hmsl, course, speed, climb, week, itow, mode, gps_nb_err) pprz_msg_send_GPS_LLA(&((_trans).trans_tx), &((_dev).device), AC_ID, lat, lon, alt, hmsl, course, speed, climb, week, itow, mode, gps_nb_err)
static inline void pprz_msg_send_GPS_LLA(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_lat, int32_t *_lon, int32_t *_alt, int32_t *_hmsl, int16_t *_course, uint16_t *_speed, int16_t *_climb, uint16_t *_week, uint32_t *_itow, uint8_t *_mode, uint8_t *_gps_nb_err) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+2+2+2+2+4+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+2+2+2+2+4+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+2+2+2+2+4+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GPS_LLA, "GPS_LLA");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _hmsl, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _course, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _speed, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _climb, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _week, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _itow, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _gps_nb_err, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_H_CTL_A(_trans, _dev, roll_sum_err, roll_sp, roll_ref, phi, aileron_sp, pitch_sum_err, pitch_sp, pitch_ref, theta, elevator_sp) pprz_msg_send_H_CTL_A(&((_trans).trans_tx), &((_dev).device), AC_ID, roll_sum_err, roll_sp, roll_ref, phi, aileron_sp, pitch_sum_err, pitch_sp, pitch_ref, theta, elevator_sp)
static inline void pprz_msg_send_H_CTL_A(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_roll_sum_err, float *_roll_sp, float *_roll_ref, float *_phi, int16_t *_aileron_sp, float *_pitch_sum_err, float *_pitch_sp, float *_pitch_ref, float *_theta, int16_t *_elevator_sp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+2+4+4+4+4+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+2+4+4+4+4+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+2+4+4+4+4+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_H_CTL_A, "H_CTL_A");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _roll_sum_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _roll_sp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _roll_ref, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _aileron_sp, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pitch_sum_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pitch_sp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pitch_ref, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _elevator_sp, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TURB_PRESSURE_RAW(_trans, _dev, ch_0, ch_1, ch_2, ch_3, ch_4, ch_5, ch_6, ch_7, ch_8, ch_9, ch_10, ch_11, ch_12, ch_13, ch_14, ch_15) pprz_msg_send_TURB_PRESSURE_RAW(&((_trans).trans_tx), &((_dev).device), AC_ID, ch_0, ch_1, ch_2, ch_3, ch_4, ch_5, ch_6, ch_7, ch_8, ch_9, ch_10, ch_11, ch_12, ch_13, ch_14, ch_15)
static inline void pprz_msg_send_TURB_PRESSURE_RAW(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_ch_0, int32_t *_ch_1, int32_t *_ch_2, int32_t *_ch_3, int32_t *_ch_4, int32_t *_ch_5, int32_t *_ch_6, int32_t *_ch_7, int32_t *_ch_8, int32_t *_ch_9, int32_t *_ch_10, int32_t *_ch_11, int32_t *_ch_12, int32_t *_ch_13, int32_t *_ch_14, int32_t *_ch_15) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TURB_PRESSURE_RAW, "TURB_PRESSURE_RAW");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_0, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_3, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_4, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_5, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_6, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_7, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_8, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_9, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_10, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_11, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_12, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_13, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_14, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ch_15, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TURB_PRESSURE_VOLTAGE(_trans, _dev, ch_1_p, ch_1_t, ch_2_p, ch_2_t, ch_3_p, ch_3_t, ch_4_p, ch_4_t, ch_5_p, ch_5_t, ch_6_p, ch_6_t, ch_7_p, ch_7_t, gnd1, gnd2) pprz_msg_send_TURB_PRESSURE_VOLTAGE(&((_trans).trans_tx), &((_dev).device), AC_ID, ch_1_p, ch_1_t, ch_2_p, ch_2_t, ch_3_p, ch_3_t, ch_4_p, ch_4_t, ch_5_p, ch_5_t, ch_6_p, ch_6_t, ch_7_p, ch_7_t, gnd1, gnd2)
static inline void pprz_msg_send_TURB_PRESSURE_VOLTAGE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_ch_1_p, float *_ch_1_t, float *_ch_2_p, float *_ch_2_t, float *_ch_3_p, float *_ch_3_t, float *_ch_4_p, float *_ch_4_t, float *_ch_5_p, float *_ch_5_t, float *_ch_6_p, float *_ch_6_t, float *_ch_7_p, float *_ch_7_t, float *_gnd1, float *_gnd2) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TURB_PRESSURE_VOLTAGE, "TURB_PRESSURE_VOLTAGE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ch_1_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ch_1_t, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ch_2_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ch_2_t, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ch_3_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ch_3_t, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ch_4_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ch_4_t, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ch_5_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ch_5_t, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ch_6_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ch_6_t, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ch_7_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ch_7_t, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _gnd1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _gnd2, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_CAM_POINT(_trans, _dev, cam_point_distance_from_home, cam_point_lat, cam_point_lon) pprz_msg_send_CAM_POINT(&((_trans).trans_tx), &((_dev).device), AC_ID, cam_point_distance_from_home, cam_point_lat, cam_point_lon)
static inline void pprz_msg_send_CAM_POINT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_cam_point_distance_from_home, float *_cam_point_lat, float *_cam_point_lon) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_CAM_POINT, "CAM_POINT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _cam_point_distance_from_home, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _cam_point_lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _cam_point_lon, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_DC_INFO(_trans, _dev, mode, lat, lon, alt, course, photo_nr, dist, next_dist, start_x, start_y, start_angle, angle, last_block, count, shutter) pprz_msg_send_DC_INFO(&((_trans).trans_tx), &((_dev).device), AC_ID, mode, lat, lon, alt, course, photo_nr, dist, next_dist, start_x, start_y, start_angle, angle, last_block, count, shutter)
static inline void pprz_msg_send_DC_INFO(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_mode, int32_t *_lat, int32_t *_lon, int32_t *_alt, float *_course, uint16_t *_photo_nr, float *_dist, float *_next_dist, float *_start_x, float *_start_y, float *_start_angle, float *_angle, float *_last_block, uint16_t *_count, uint8_t *_shutter) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4+4+4+4+2+4+4+4+4+4+4+4+2+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4+4+4+4+2+4+4+4+4+4+4+4+2+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4+4+4+4+2+4+4+4+4+4+4+4+2+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_DC_INFO, "DC_INFO");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _mode, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _course, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _photo_nr, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _dist, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _next_dist, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _start_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _start_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _start_angle, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _angle, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _last_block, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _count, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _shutter, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AMSYS_BARO(_trans, _dev, pBaroRaw, pBaro, pHomePressure, AltOffset, aktuell, Over_Ground, tempBaro) pprz_msg_send_AMSYS_BARO(&((_trans).trans_tx), &((_dev).device), AC_ID, pBaroRaw, pBaro, pHomePressure, AltOffset, aktuell, Over_Ground, tempBaro)
static inline void pprz_msg_send_AMSYS_BARO(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_pBaroRaw, float *_pBaro, float *_pHomePressure, float *_AltOffset, float *_aktuell, float *_Over_Ground, float *_tempBaro) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AMSYS_BARO, "AMSYS_BARO");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _pBaroRaw, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pBaro, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pHomePressure, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _AltOffset, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _aktuell, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Over_Ground, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _tempBaro, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AMSYS_AIRSPEED(_trans, _dev, asRaw, asPresure, asAirspeed, asAirsFilt, asTemp) pprz_msg_send_AMSYS_AIRSPEED(&((_trans).trans_tx), &((_dev).device), AC_ID, asRaw, asPresure, asAirspeed, asAirsFilt, asTemp)
static inline void pprz_msg_send_AMSYS_AIRSPEED(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_asRaw, float *_asPresure, float *_asAirspeed, float *_asAirsFilt, float *_asTemp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AMSYS_AIRSPEED, "AMSYS_AIRSPEED");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _asRaw, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _asPresure, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _asAirspeed, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _asAirsFilt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _asTemp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_FLIGHT_BENCHMARK(_trans, _dev, SE_As, SE_Alt, SE_Pos, Err_As, Err_Alt, Err_Pos) pprz_msg_send_FLIGHT_BENCHMARK(&((_trans).trans_tx), &((_dev).device), AC_ID, SE_As, SE_Alt, SE_Pos, Err_As, Err_Alt, Err_Pos)
static inline void pprz_msg_send_FLIGHT_BENCHMARK(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_SE_As, float *_SE_Alt, float *_SE_Pos, float *_Err_As, float *_Err_Alt, float *_Err_Pos) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_FLIGHT_BENCHMARK, "FLIGHT_BENCHMARK");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _SE_As, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _SE_Alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _SE_Pos, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Err_As, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Err_Alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Err_Pos, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MPL3115_BARO(_trans, _dev, pressure, temp, alt) pprz_msg_send_MPL3115_BARO(&((_trans).trans_tx), &((_dev).device), AC_ID, pressure, temp, alt)
static inline void pprz_msg_send_MPL3115_BARO(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_pressure, int16_t *_temp, float *_alt) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MPL3115_BARO, "MPL3115_BARO");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _pressure, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _temp, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AOA(_trans, _dev, raw, angle) pprz_msg_send_AOA(&((_trans).trans_tx), &((_dev).device), AC_ID, raw, angle)
static inline void pprz_msg_send_AOA(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_raw, float *_angle) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AOA, "AOA");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _raw, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _angle, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_XTEND_RSSI(_trans, _dev, datalink_time, rssi_fade_margin, duty) pprz_msg_send_XTEND_RSSI(&((_trans).trans_tx), &((_dev).device), AC_ID, datalink_time, rssi_fade_margin, duty)
static inline void pprz_msg_send_XTEND_RSSI(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_datalink_time, uint8_t *_rssi_fade_margin, uint8_t *_duty) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_XTEND_RSSI, "XTEND_RSSI");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _datalink_time, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _rssi_fade_margin, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _duty, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SUPERBITRF(_trans, _dev, status, cyrf_status, irq_count, rx_packet_count, tx_packet_count, transfer_timeouts, resync_count, uplink_count, rc_count, timing1, timing2, bind_mfg_id, nb_mfg_id, mfg_id) pprz_msg_send_SUPERBITRF(&((_trans).trans_tx), &((_dev).device), AC_ID, status, cyrf_status, irq_count, rx_packet_count, tx_packet_count, transfer_timeouts, resync_count, uplink_count, rc_count, timing1, timing2, bind_mfg_id, nb_mfg_id, mfg_id)
static inline void pprz_msg_send_SUPERBITRF(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_status, uint8_t *_cyrf_status, uint32_t *_irq_count, uint32_t *_rx_packet_count, uint32_t *_tx_packet_count, uint32_t *_transfer_timeouts, uint32_t *_resync_count, uint32_t *_uplink_count, uint32_t *_rc_count, uint32_t *_timing1, uint32_t *_timing2, uint32_t *_bind_mfg_id, uint8_t nb_mfg_id, uint8_t *_mfg_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+4+4+4+4+1+nb_mfg_id*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4+4+4+4+4+4+4+4+1+nb_mfg_id*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4+4+4+4+4+4+4+4+1+nb_mfg_id*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SUPERBITRF, "SUPERBITRF");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _status, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _cyrf_status, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _irq_count, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _rx_packet_count, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _tx_packet_count, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _transfer_timeouts, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _resync_count, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _uplink_count, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _rc_count, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _timing1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _timing2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _bind_mfg_id, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_mfg_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _mfg_id, nb_mfg_id*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GX3_INFO(_trans, _dev, GX3_freq, chksm_error, hdr_error, GX3_chksm) pprz_msg_send_GX3_INFO(&((_trans).trans_tx), &((_dev).device), AC_ID, GX3_freq, chksm_error, hdr_error, GX3_chksm)
static inline void pprz_msg_send_GX3_INFO(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_GX3_freq, uint32_t *_chksm_error, uint32_t *_hdr_error, uint16_t *_GX3_chksm) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GX3_INFO, "GX3_INFO");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _GX3_freq, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _chksm_error, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _hdr_error, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _GX3_chksm, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_EXPLAIN(_trans, _dev, type, id, nb_string, string) pprz_msg_send_EXPLAIN(&((_trans).trans_tx), &((_dev).device), AC_ID, type, id, nb_string, string)
static inline void pprz_msg_send_EXPLAIN(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_type, uint8_t *_id, uint8_t nb_string, uint8_t *_string) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1+nb_string*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1+nb_string*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1+nb_string*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_EXPLAIN, "EXPLAIN");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _type, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_string, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _string, nb_string*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_VIDEO_TELEMETRY(_trans, _dev, blob_x1, blob_y1, blob_x2, blob_y2, blob_x3, blob_y3, blob_x4, blob_y4) pprz_msg_send_VIDEO_TELEMETRY(&((_trans).trans_tx), &((_dev).device), AC_ID, blob_x1, blob_y1, blob_x2, blob_y2, blob_x3, blob_y3, blob_x4, blob_y4)
static inline void pprz_msg_send_VIDEO_TELEMETRY(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_blob_x1, int32_t *_blob_y1, int32_t *_blob_x2, int32_t *_blob_y2, int32_t *_blob_x3, int32_t *_blob_y3, int32_t *_blob_x4, int32_t *_blob_y4) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_VIDEO_TELEMETRY, "VIDEO_TELEMETRY");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _blob_x1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _blob_y1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _blob_x2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _blob_y2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _blob_x3, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _blob_y3, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _blob_x4, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _blob_y4, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_VF_UPDATE(_trans, _dev, baro, range_meter) pprz_msg_send_VF_UPDATE(&((_trans).trans_tx), &((_dev).device), AC_ID, baro, range_meter)
static inline void pprz_msg_send_VF_UPDATE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_baro, float *_range_meter) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_VF_UPDATE, "VF_UPDATE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _baro, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _range_meter, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_VF_PREDICT(_trans, _dev, accel) pprz_msg_send_VF_PREDICT(&((_trans).trans_tx), &((_dev).device), AC_ID, accel)
static inline void pprz_msg_send_VF_PREDICT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_accel) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_VF_PREDICT, "VF_PREDICT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _accel, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_INV_FILTER(_trans, _dev, quat, phi_inv, theta_inv, psi_inv, Vx_inv, Vy_inv, Vz_inv, Px_inv, Py_inv, Pz_inv, bias_phi, bias_theta, bias_psi, bias_as, bias_hb, meas_baro, meas_gps) pprz_msg_send_INV_FILTER(&((_trans).trans_tx), &((_dev).device), AC_ID, quat, phi_inv, theta_inv, psi_inv, Vx_inv, Vy_inv, Vz_inv, Px_inv, Py_inv, Pz_inv, bias_phi, bias_theta, bias_psi, bias_as, bias_hb, meas_baro, meas_gps)
static inline void pprz_msg_send_INV_FILTER(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_quat, float *_phi_inv, float *_theta_inv, float *_psi_inv, float *_Vx_inv, float *_Vy_inv, float *_Vz_inv, float *_Px_inv, float *_Py_inv, float *_Pz_inv, float *_bias_phi, float *_bias_theta, float *_bias_psi, float *_bias_as, float *_bias_hb, float *_meas_baro, float *_meas_gps) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_INV_FILTER, "INV_FILTER");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _quat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _phi_inv, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _theta_inv, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _psi_inv, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Vx_inv, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Vy_inv, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Vz_inv, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Px_inv, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Py_inv, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Pz_inv, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bias_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bias_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bias_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bias_as, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bias_hb, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _meas_baro, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _meas_gps, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MISSION_STATUS(_trans, _dev, remaining_time, nb_task_list, task_list) pprz_msg_send_MISSION_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, remaining_time, nb_task_list, task_list)
static inline void pprz_msg_send_MISSION_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_remaining_time, uint8_t nb_task_list, uint8_t *_task_list) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+1+nb_task_list*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+1+nb_task_list*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+1+nb_task_list*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MISSION_STATUS, "MISSION_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _remaining_time, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_task_list, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _task_list, nb_task_list*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_CROSS_TRACK_ERROR(_trans, _dev, cross_track_error, cte_int) pprz_msg_send_CROSS_TRACK_ERROR(&((_trans).trans_tx), &((_dev).device), AC_ID, cross_track_error, cte_int)
static inline void pprz_msg_send_CROSS_TRACK_ERROR(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_cross_track_error, float *_cte_int) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_CROSS_TRACK_ERROR, "CROSS_TRACK_ERROR");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _cross_track_error, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _cte_int, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GENERIC_COM(_trans, _dev, lat, lon, alt, gspeed, course, airspeed, vsupply, energy, throttle, ap_mode, nav_block, flight_time) pprz_msg_send_GENERIC_COM(&((_trans).trans_tx), &((_dev).device), AC_ID, lat, lon, alt, gspeed, course, airspeed, vsupply, energy, throttle, ap_mode, nav_block, flight_time)
static inline void pprz_msg_send_GENERIC_COM(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_lat, int32_t *_lon, int16_t *_alt, uint16_t *_gspeed, int16_t *_course, uint16_t *_airspeed, uint8_t *_vsupply, uint8_t *_energy, uint8_t *_throttle, uint8_t *_ap_mode, uint8_t *_nav_block, uint16_t *_flight_time) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+2+2+2+2+1+1+1+1+1+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+2+2+2+2+1+1+1+1+1+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+2+2+2+2+1+1+1+1+1+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GENERIC_COM, "GENERIC_COM");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _alt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _gspeed, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _course, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _airspeed, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _vsupply, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _energy, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _throttle, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ap_mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _nav_block, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _flight_time, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_FORMATION_SLOT_TM(_trans, _dev, ac_id, mode, slot_east, slot_north, slot_alt) pprz_msg_send_FORMATION_SLOT_TM(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, mode, slot_east, slot_north, slot_alt)
static inline void pprz_msg_send_FORMATION_SLOT_TM(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_mode, float *_slot_east, float *_slot_north, float *_slot_alt) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_FORMATION_SLOT_TM, "FORMATION_SLOT_TM");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _slot_east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _slot_north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _slot_alt, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_FORMATION_STATUS_TM(_trans, _dev, ac_id, leader_id, status) pprz_msg_send_FORMATION_STATUS_TM(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, leader_id, status)
static inline void pprz_msg_send_FORMATION_STATUS_TM(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_leader_id, uint8_t *_status) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_FORMATION_STATUS_TM, "FORMATION_STATUS_TM");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _leader_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _status, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_BMP_STATUS(_trans, _dev, UP, UT, press, temp) pprz_msg_send_BMP_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, UP, UT, press, temp)
static inline void pprz_msg_send_BMP_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_UP, int32_t *_UT, int32_t *_press, int32_t *_temp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_BMP_STATUS, "BMP_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _UP, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _UT, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _press, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _temp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MLX_STATUS(_trans, _dev, itemp_case, temp_case, itemp_obj, temp_obj) pprz_msg_send_MLX_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, itemp_case, temp_case, itemp_obj, temp_obj)
static inline void pprz_msg_send_MLX_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_itemp_case, float *_temp_case, uint16_t *_itemp_obj, float *_temp_obj) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MLX_STATUS, "MLX_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _itemp_case, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _temp_case, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _itemp_obj, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _temp_obj, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TMP_STATUS(_trans, _dev, itemp, temp) pprz_msg_send_TMP_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, itemp, temp)
static inline void pprz_msg_send_TMP_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_itemp, float *_temp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TMP_STATUS, "TMP_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _itemp, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _temp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_WIND_INFO_RET(_trans, _dev, flags, east, north, up, airspeed) pprz_msg_send_WIND_INFO_RET(&((_trans).trans_tx), &((_dev).device), AC_ID, flags, east, north, up, airspeed)
static inline void pprz_msg_send_WIND_INFO_RET(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_flags, float *_east, float *_north, float *_up, float *_airspeed) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_WIND_INFO_RET, "WIND_INFO_RET");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _flags, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _up, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _airspeed, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SCP_STATUS(_trans, _dev, press, temp) pprz_msg_send_SCP_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, press, temp)
static inline void pprz_msg_send_SCP_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_press, int16_t *_temp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SCP_STATUS, "SCP_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _press, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _temp, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SHT_STATUS(_trans, _dev, ihumid, itemp, humid, temp) pprz_msg_send_SHT_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, ihumid, itemp, humid, temp)
static inline void pprz_msg_send_SHT_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_ihumid, uint16_t *_itemp, float *_humid, float *_temp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SHT_STATUS, "SHT_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _ihumid, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _itemp, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _humid, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _temp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ENOSE_STATUS(_trans, _dev, val1, val2, val3, PID, nb_heat, heat) pprz_msg_send_ENOSE_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, val1, val2, val3, PID, nb_heat, heat)
static inline void pprz_msg_send_ENOSE_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_val1, uint16_t *_val2, uint16_t *_val3, uint16_t *_PID, uint8_t nb_heat, uint8_t *_heat) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+2+1+nb_heat*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+2+1+nb_heat*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+2+1+nb_heat*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ENOSE_STATUS, "ENOSE_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _val1, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _val2, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _val3, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _PID, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_heat, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _heat, nb_heat*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_DPICCO_STATUS(_trans, _dev, humid, temp, fhumid, ftemp) pprz_msg_send_DPICCO_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, humid, temp, fhumid, ftemp)
static inline void pprz_msg_send_DPICCO_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_humid, uint16_t *_temp, float *_fhumid, float *_ftemp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_DPICCO_STATUS, "DPICCO_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _humid, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _temp, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fhumid, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ftemp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ANTENNA_DEBUG(_trans, _dev, mag_xraw, mag_yraw, mag_xcal, mag_ycal, mag_heading, mag_magnitude, mag_temp, mag_distor, mag_cal_status) pprz_msg_send_ANTENNA_DEBUG(&((_trans).trans_tx), &((_dev).device), AC_ID, mag_xraw, mag_yraw, mag_xcal, mag_ycal, mag_heading, mag_magnitude, mag_temp, mag_distor, mag_cal_status)
static inline void pprz_msg_send_ANTENNA_DEBUG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_mag_xraw, int32_t *_mag_yraw, float *_mag_xcal, float *_mag_ycal, float *_mag_heading, float *_mag_magnitude, float *_mag_temp, uint8_t *_mag_distor, uint8_t *_mag_cal_status) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ANTENNA_DEBUG, "ANTENNA_DEBUG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _mag_xraw, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _mag_yraw, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mag_xcal, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mag_ycal, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mag_heading, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mag_magnitude, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mag_temp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mag_distor, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mag_cal_status, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ANTENNA_STATUS(_trans, _dev, azim_sp, elev_sp, id_sp, mode) pprz_msg_send_ANTENNA_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, azim_sp, elev_sp, id_sp, mode)
static inline void pprz_msg_send_ANTENNA_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_azim_sp, float *_elev_sp, uint8_t *_id_sp, uint8_t *_mode) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ANTENNA_STATUS, "ANTENNA_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _azim_sp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _elev_sp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _id_sp, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mode, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MOTOR_BENCH_STATUS(_trans, _dev, time_ticks, throttle, rpm, current, thrust, torque, time_s, mode) pprz_msg_send_MOTOR_BENCH_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, time_ticks, throttle, rpm, current, thrust, torque, time_s, mode)
static inline void pprz_msg_send_MOTOR_BENCH_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_time_ticks, float *_throttle, float *_rpm, float *_current, float *_thrust, float *_torque, uint16_t *_time_s, uint8_t *_mode) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+2+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+2+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+2+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MOTOR_BENCH_STATUS, "MOTOR_BENCH_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _time_ticks, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _throttle, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _rpm, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _current, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _thrust, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _torque, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _time_s, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mode, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MOTOR_BENCH_STATIC(_trans, _dev, av_rpm, av_thrust, av_current, throttle) pprz_msg_send_MOTOR_BENCH_STATIC(&((_trans).trans_tx), &((_dev).device), AC_ID, av_rpm, av_thrust, av_current, throttle)
static inline void pprz_msg_send_MOTOR_BENCH_STATIC(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_av_rpm, float *_av_thrust, float *_av_current, uint16_t *_throttle) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MOTOR_BENCH_STATIC, "MOTOR_BENCH_STATIC");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _av_rpm, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _av_thrust, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _av_current, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _throttle, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_HIH_STATUS(_trans, _dev, humid, fhumid, ftemp) pprz_msg_send_HIH_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, humid, fhumid, ftemp)
static inline void pprz_msg_send_HIH_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_humid, float *_fhumid, float *_ftemp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_HIH_STATUS, "HIH_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _humid, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fhumid, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ftemp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TEMT_STATUS(_trans, _dev, light, f_light) pprz_msg_send_TEMT_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, light, f_light)
static inline void pprz_msg_send_TEMT_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_light, float *_f_light) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TEMT_STATUS, "TEMT_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _light, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _f_light, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GP2Y_STATUS(_trans, _dev, idensity, density) pprz_msg_send_GP2Y_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, idensity, density)
static inline void pprz_msg_send_GP2Y_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_idensity, float *_density) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GP2Y_STATUS, "GP2Y_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _idensity, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _density, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SHT_I2C_SERIAL(_trans, _dev, serial0, serial1) pprz_msg_send_SHT_I2C_SERIAL(&((_trans).trans_tx), &((_dev).device), AC_ID, serial0, serial1)
static inline void pprz_msg_send_SHT_I2C_SERIAL(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_serial0, uint32_t *_serial1) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SHT_I2C_SERIAL, "SHT_I2C_SERIAL");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _serial0, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _serial1, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_PPM(_trans, _dev, ppm_rate, nb_values, values) pprz_msg_send_PPM(&((_trans).trans_tx), &((_dev).device), AC_ID, ppm_rate, nb_values, values)
static inline void pprz_msg_send_PPM(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ppm_rate, uint8_t nb_values, uint16_t *_values) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+nb_values*2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+nb_values*2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+nb_values*2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_PPM, "PPM");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ppm_rate, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_values, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_ARRAY, (void *) _values, nb_values*2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_RC(_trans, _dev, nb_values, values) pprz_msg_send_RC(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_values, values)
static inline void pprz_msg_send_RC(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_values, int16_t *_values) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_values*2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_values*2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_values*2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_RC, "RC");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_values, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_ARRAY, (void *) _values, nb_values*2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_COMMANDS(_trans, _dev, nb_values, values) pprz_msg_send_COMMANDS(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_values, values)
static inline void pprz_msg_send_COMMANDS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_values, int16_t *_values) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_values*2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_values*2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_values*2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_COMMANDS, "COMMANDS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_values, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_ARRAY, (void *) _values, nb_values*2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_FBW_STATUS(_trans, _dev, rc_status, frame_rate, mode, vsupply, current) pprz_msg_send_FBW_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, rc_status, frame_rate, mode, vsupply, current)
static inline void pprz_msg_send_FBW_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_rc_status, uint8_t *_frame_rate, uint8_t *_mode, uint16_t *_vsupply, int32_t *_current) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_FBW_STATUS, "FBW_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _rc_status, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _frame_rate, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _vsupply, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _current, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ADC(_trans, _dev, mcu, nb_values, values) pprz_msg_send_ADC(&((_trans).trans_tx), &((_dev).device), AC_ID, mcu, nb_values, values)
static inline void pprz_msg_send_ADC(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_mcu, uint8_t nb_values, uint16_t *_values) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+nb_values*2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+nb_values*2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+nb_values*2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ADC, "ADC");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mcu, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_values, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_ARRAY, (void *) _values, nb_values*2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ACTUATORS(_trans, _dev, nb_values, values) pprz_msg_send_ACTUATORS(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_values, values)
static inline void pprz_msg_send_ACTUATORS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_values, int16_t *_values) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_values*2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_values*2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_values*2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ACTUATORS, "ACTUATORS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_values, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_ARRAY, (void *) _values, nb_values*2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_BLUEGIGA(_trans, _dev, data_rate, A2A_msg_rate) pprz_msg_send_BLUEGIGA(&((_trans).trans_tx), &((_dev).device), AC_ID, data_rate, A2A_msg_rate)
static inline void pprz_msg_send_BLUEGIGA(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_data_rate, uint32_t *_A2A_msg_rate) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_BLUEGIGA, "BLUEGIGA");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _data_rate, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _A2A_msg_rate, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_PIKSI_HEARTBEAT(_trans, _dev, heartbeat) pprz_msg_send_PIKSI_HEARTBEAT(&((_trans).trans_tx), &((_dev).device), AC_ID, heartbeat)
static inline void pprz_msg_send_PIKSI_HEARTBEAT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_heartbeat) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_PIKSI_HEARTBEAT, "PIKSI_HEARTBEAT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _heartbeat, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MULTIGAZE_METERS(_trans, _dev, nb_multigaze_meters, multigaze_meters) pprz_msg_send_MULTIGAZE_METERS(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_multigaze_meters, multigaze_meters)
static inline void pprz_msg_send_MULTIGAZE_METERS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_multigaze_meters, float *_multigaze_meters) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_multigaze_meters*4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_multigaze_meters*4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_multigaze_meters*4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MULTIGAZE_METERS, "MULTIGAZE_METERS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_multigaze_meters, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_ARRAY, (void *) _multigaze_meters, nb_multigaze_meters*4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_DC_SHOT(_trans, _dev, photo_nr, lat, lon, alt, hmsl, phi, theta, psi, course, speed, itow) pprz_msg_send_DC_SHOT(&((_trans).trans_tx), &((_dev).device), AC_ID, photo_nr, lat, lon, alt, hmsl, phi, theta, psi, course, speed, itow)
static inline void pprz_msg_send_DC_SHOT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_photo_nr, int32_t *_lat, int32_t *_lon, int32_t *_alt, int32_t *_hmsl, int16_t *_phi, int16_t *_theta, int16_t *_psi, int16_t *_course, uint16_t *_speed, uint32_t *_itow) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4+4+4+4+2+2+2+2+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4+4+4+4+2+2+2+2+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4+4+4+4+2+2+2+2+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_DC_SHOT, "DC_SHOT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _photo_nr, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _hmsl, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _phi, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _theta, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _psi, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _course, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _speed, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _itow, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TEST_BOARD_RESULTS(_trans, _dev, uart, ppm, nb_servo, servo) pprz_msg_send_TEST_BOARD_RESULTS(&((_trans).trans_tx), &((_dev).device), AC_ID, uart, ppm, nb_servo, servo)
static inline void pprz_msg_send_TEST_BOARD_RESULTS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_uart, uint8_t *_ppm, uint8_t nb_servo, uint16_t *_servo) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1+nb_servo*2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1+nb_servo*2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1+nb_servo*2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TEST_BOARD_RESULTS, "TEST_BOARD_RESULTS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _uart, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ppm, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_servo, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_ARRAY, (void *) _servo, nb_servo*2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MLX_SERIAL(_trans, _dev, serial0, serial1) pprz_msg_send_MLX_SERIAL(&((_trans).trans_tx), &((_dev).device), AC_ID, serial0, serial1)
static inline void pprz_msg_send_MLX_SERIAL(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_serial0, uint32_t *_serial1) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MLX_SERIAL, "MLX_SERIAL");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _serial0, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _serial1, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_PAYLOAD(_trans, _dev, nb_values, values) pprz_msg_send_PAYLOAD(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_values, values)
static inline void pprz_msg_send_PAYLOAD(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_values, uint8_t *_values) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_values*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_values*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_values*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_PAYLOAD, "PAYLOAD");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_values, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _values, nb_values*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_HTM_STATUS(_trans, _dev, ihumid, itemp, humid, temp) pprz_msg_send_HTM_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, ihumid, itemp, humid, temp)
static inline void pprz_msg_send_HTM_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_ihumid, uint16_t *_itemp, float *_humid, float *_temp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_HTM_STATUS, "HTM_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _ihumid, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _itemp, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _humid, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _temp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_BARO_MS5611(_trans, _dev, d1, d2, pressure, temp) pprz_msg_send_BARO_MS5611(&((_trans).trans_tx), &((_dev).device), AC_ID, d1, d2, pressure, temp)
static inline void pprz_msg_send_BARO_MS5611(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_d1, uint32_t *_d2, float *_pressure, float *_temp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_BARO_MS5611, "BARO_MS5611");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _d1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _d2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pressure, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _temp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MS5611_COEFF(_trans, _dev, c0, c1, c2, c3, c4, c5, c6, c7) pprz_msg_send_MS5611_COEFF(&((_trans).trans_tx), &((_dev).device), AC_ID, c0, c1, c2, c3, c4, c5, c6, c7)
static inline void pprz_msg_send_MS5611_COEFF(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_c0, uint16_t *_c1, uint16_t *_c2, uint16_t *_c3, uint16_t *_c4, uint16_t *_c5, uint16_t *_c6, uint16_t *_c7) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+2+2+2+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+2+2+2+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+2+2+2+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MS5611_COEFF, "MS5611_COEFF");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _c0, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _c1, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _c2, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _c3, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _c4, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _c5, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _c6, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _c7, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ATMOSPHERE_CHARGE(_trans, _dev, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9) pprz_msg_send_ATMOSPHERE_CHARGE(&((_trans).trans_tx), &((_dev).device), AC_ID, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9)
static inline void pprz_msg_send_ATMOSPHERE_CHARGE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_t0, uint16_t *_t1, uint16_t *_t2, uint16_t *_t3, uint16_t *_t4, uint16_t *_t5, uint16_t *_t6, uint16_t *_t7, uint16_t *_t8, uint16_t *_t9) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+2+2+2+2+2+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+2+2+2+2+2+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+2+2+2+2+2+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ATMOSPHERE_CHARGE, "ATMOSPHERE_CHARGE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _t0, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _t1, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _t2, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _t3, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _t4, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _t5, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _t6, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _t7, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _t8, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _t9, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SOLAR_RADIATION(_trans, _dev, up_t0, dn_t0, up_t1, dn_t1, up_t2, dn_t2, up_t3, dn_t3, up_t4, dn_t4, up_t5, dn_t5, up_t6, dn_t6, up_t7, dn_t7, up_t8, dn_t8, up_t9, dn_t9) pprz_msg_send_SOLAR_RADIATION(&((_trans).trans_tx), &((_dev).device), AC_ID, up_t0, dn_t0, up_t1, dn_t1, up_t2, dn_t2, up_t3, dn_t3, up_t4, dn_t4, up_t5, dn_t5, up_t6, dn_t6, up_t7, dn_t7, up_t8, dn_t8, up_t9, dn_t9)
static inline void pprz_msg_send_SOLAR_RADIATION(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_up_t0, uint16_t *_dn_t0, uint16_t *_up_t1, uint16_t *_dn_t1, uint16_t *_up_t2, uint16_t *_dn_t2, uint16_t *_up_t3, uint16_t *_dn_t3, uint16_t *_up_t4, uint16_t *_dn_t4, uint16_t *_up_t5, uint16_t *_dn_t5, uint16_t *_up_t6, uint16_t *_dn_t6, uint16_t *_up_t7, uint16_t *_dn_t7, uint16_t *_up_t8, uint16_t *_dn_t8, uint16_t *_up_t9, uint16_t *_dn_t9) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SOLAR_RADIATION, "SOLAR_RADIATION");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _up_t0, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _dn_t0, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _up_t1, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _dn_t1, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _up_t2, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _dn_t2, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _up_t3, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _dn_t3, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _up_t4, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _dn_t4, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _up_t5, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _dn_t5, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _up_t6, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _dn_t6, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _up_t7, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _dn_t7, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _up_t8, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _dn_t8, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _up_t9, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _dn_t9, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TCAS_TA(_trans, _dev, ac_id) pprz_msg_send_TCAS_TA(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id)
static inline void pprz_msg_send_TCAS_TA(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TCAS_TA, "TCAS_TA");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TCAS_RA(_trans, _dev, ac_id, resolve) pprz_msg_send_TCAS_RA(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, resolve)
static inline void pprz_msg_send_TCAS_RA(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, uint8_t *_resolve) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TCAS_RA, "TCAS_RA");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _resolve, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TCAS_RESOLVED(_trans, _dev, ac_id) pprz_msg_send_TCAS_RESOLVED(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id)
static inline void pprz_msg_send_TCAS_RESOLVED(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TCAS_RESOLVED, "TCAS_RESOLVED");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TCAS_DEBUG(_trans, _dev, ac_id, tau) pprz_msg_send_TCAS_DEBUG(&((_trans).trans_tx), &((_dev).device), AC_ID, ac_id, tau)
static inline void pprz_msg_send_TCAS_DEBUG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_ac_id, float *_tau) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TCAS_DEBUG, "TCAS_DEBUG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ac_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _tau, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_POTENTIAL(_trans, _dev, east, north, alt, speed, climb) pprz_msg_send_POTENTIAL(&((_trans).trans_tx), &((_dev).device), AC_ID, east, north, alt, speed, climb)
static inline void pprz_msg_send_POTENTIAL(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_east, float *_north, float *_alt, float *_speed, float *_climb) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_POTENTIAL, "POTENTIAL");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _speed, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _climb, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_VERTICAL_ENERGY(_trans, _dev, Epot_err, Ekin_err, Etot_err, Edis_err, throttle, nav_pitch, speed_sp) pprz_msg_send_VERTICAL_ENERGY(&((_trans).trans_tx), &((_dev).device), AC_ID, Epot_err, Ekin_err, Etot_err, Edis_err, throttle, nav_pitch, speed_sp)
static inline void pprz_msg_send_VERTICAL_ENERGY(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_Epot_err, float *_Ekin_err, float *_Etot_err, float *_Edis_err, float *_throttle, float *_nav_pitch, float *_speed_sp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_VERTICAL_ENERGY, "VERTICAL_ENERGY");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Epot_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Ekin_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Etot_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Edis_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _throttle, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _nav_pitch, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _speed_sp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TEMP_TCOUPLE(_trans, _dev, fval0, fval1, fval2, fval3, fref0, fref1, fref2, fref3, val0, val1, val2, val3, ref0, ref1, ref2, ref3) pprz_msg_send_TEMP_TCOUPLE(&((_trans).trans_tx), &((_dev).device), AC_ID, fval0, fval1, fval2, fval3, fref0, fref1, fref2, fref3, val0, val1, val2, val3, ref0, ref1, ref2, ref3)
static inline void pprz_msg_send_TEMP_TCOUPLE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_fval0, float *_fval1, float *_fval2, float *_fval3, float *_fref0, float *_fref1, float *_fref2, float *_fref3, uint16_t *_val0, uint16_t *_val1, uint16_t *_val2, uint16_t *_val3, uint16_t *_ref0, uint16_t *_ref1, uint16_t *_ref2, uint16_t *_ref3) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+2+2+2+2+2+2+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+2+2+2+2+2+2+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+2+2+2+2+2+2+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TEMP_TCOUPLE, "TEMP_TCOUPLE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fval0, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fval1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fval2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fval3, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fref0, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fref1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fref2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fref3, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _val0, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _val1, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _val2, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _val3, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _ref0, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _ref1, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _ref2, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _ref3, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SHT_I2C_STATUS(_trans, _dev, ihumid, itemp, humid, temp) pprz_msg_send_SHT_I2C_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, ihumid, itemp, humid, temp)
static inline void pprz_msg_send_SHT_I2C_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_ihumid, uint16_t *_itemp, float *_humid, float *_temp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SHT_I2C_STATUS, "SHT_I2C_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _ihumid, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _itemp, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _humid, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _temp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_CAMERA_SNAPSHOT(_trans, _dev, snapshot_image_number) pprz_msg_send_CAMERA_SNAPSHOT(&((_trans).trans_tx), &((_dev).device), AC_ID, snapshot_image_number)
static inline void pprz_msg_send_CAMERA_SNAPSHOT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_snapshot_image_number) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_CAMERA_SNAPSHOT, "CAMERA_SNAPSHOT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _snapshot_image_number, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TIMESTAMP(_trans, _dev, timestamp) pprz_msg_send_TIMESTAMP(&((_trans).trans_tx), &((_dev).device), AC_ID, timestamp)
static inline void pprz_msg_send_TIMESTAMP(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_timestamp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TIMESTAMP, "TIMESTAMP");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _timestamp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_STAB_ATTITUDE_FLOAT(_trans, _dev, est_p, est_q, est_r, est_phi, est_theta, est_psi, ref_phi, ref_theta, ref_psi, sum_err_phi, sum_err_theta, sum_err_psi, delta_a_fb, delta_e_fb, delta_r_fb, delta_a_ff, delta_e_ff, delta_r_ff, delta_a, delta_e, delta_r, est_p_d, est_q_d, est_r_d) pprz_msg_send_STAB_ATTITUDE_FLOAT(&((_trans).trans_tx), &((_dev).device), AC_ID, est_p, est_q, est_r, est_phi, est_theta, est_psi, ref_phi, ref_theta, ref_psi, sum_err_phi, sum_err_theta, sum_err_psi, delta_a_fb, delta_e_fb, delta_r_fb, delta_a_ff, delta_e_ff, delta_r_ff, delta_a, delta_e, delta_r, est_p_d, est_q_d, est_r_d)
static inline void pprz_msg_send_STAB_ATTITUDE_FLOAT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_est_p, float *_est_q, float *_est_r, float *_est_phi, float *_est_theta, float *_est_psi, float *_ref_phi, float *_ref_theta, float *_ref_psi, float *_sum_err_phi, float *_sum_err_theta, float *_sum_err_psi, float *_delta_a_fb, float *_delta_e_fb, float *_delta_r_fb, float *_delta_a_ff, float *_delta_e_ff, float *_delta_r_ff, int32_t *_delta_a, int32_t *_delta_e, int32_t *_delta_r, float *_est_p_d, float *_est_q_d, float *_est_r_d) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_STAB_ATTITUDE_FLOAT, "STAB_ATTITUDE_FLOAT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _est_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _est_q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _est_r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _est_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _est_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _est_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ref_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ref_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ref_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _sum_err_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _sum_err_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _sum_err_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _delta_a_fb, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _delta_e_fb, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _delta_r_fb, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _delta_a_ff, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _delta_e_ff, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _delta_r_ff, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _delta_a, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _delta_e, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _delta_r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _est_p_d, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _est_q_d, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _est_r_d, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMU_GYRO_SCALED(_trans, _dev, gp, gq, gr) pprz_msg_send_IMU_GYRO_SCALED(&((_trans).trans_tx), &((_dev).device), AC_ID, gp, gq, gr)
static inline void pprz_msg_send_IMU_GYRO_SCALED(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_gp, int32_t *_gq, int32_t *_gr) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMU_GYRO_SCALED, "IMU_GYRO_SCALED");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _gp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _gq, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _gr, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMU_ACCEL_SCALED(_trans, _dev, ax, ay, az) pprz_msg_send_IMU_ACCEL_SCALED(&((_trans).trans_tx), &((_dev).device), AC_ID, ax, ay, az)
static inline void pprz_msg_send_IMU_ACCEL_SCALED(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_ax, int32_t *_ay, int32_t *_az) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMU_ACCEL_SCALED, "IMU_ACCEL_SCALED");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ax, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ay, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _az, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMU_MAG_SCALED(_trans, _dev, mx, my, mz) pprz_msg_send_IMU_MAG_SCALED(&((_trans).trans_tx), &((_dev).device), AC_ID, mx, my, mz)
static inline void pprz_msg_send_IMU_MAG_SCALED(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_mx, int32_t *_my, int32_t *_mz) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMU_MAG_SCALED, "IMU_MAG_SCALED");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _mx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _my, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _mz, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_FILTER(_trans, _dev, phi, theta, psi, measure_phi, measure_theta, measure_psi, corrected_phi, corrected_theta, corrected_psi, correction_phi, correction_theta, correction_psi, bp, bq, br, comp_id) pprz_msg_send_FILTER(&((_trans).trans_tx), &((_dev).device), AC_ID, phi, theta, psi, measure_phi, measure_theta, measure_psi, corrected_phi, corrected_theta, corrected_psi, correction_phi, correction_theta, correction_psi, bp, bq, br, comp_id)
static inline void pprz_msg_send_FILTER(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_phi, int32_t *_theta, int32_t *_psi, int32_t *_measure_phi, int32_t *_measure_theta, int32_t *_measure_psi, int32_t *_corrected_phi, int32_t *_corrected_theta, int32_t *_corrected_psi, int32_t *_correction_phi, int32_t *_correction_theta, int32_t *_correction_psi, int32_t *_bp, int32_t *_bq, int32_t *_br, uint8_t *_comp_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_FILTER, "FILTER");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _measure_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _measure_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _measure_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _corrected_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _corrected_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _corrected_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _correction_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _correction_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _correction_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _bp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _bq, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _br, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _comp_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_FILTER2(_trans, _dev, px, py, pz, gsx, gsy, gsz) pprz_msg_send_FILTER2(&((_trans).trans_tx), &((_dev).device), AC_ID, px, py, pz, gsx, gsy, gsz)
static inline void pprz_msg_send_FILTER2(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_px, int32_t *_py, int32_t *_pz, int32_t *_gsx, int32_t *_gsy, int32_t *_gsz) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_FILTER2, "FILTER2");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _px, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _py, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _pz, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _gsx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _gsy, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _gsz, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_RATE_LOOP(_trans, _dev, sp_p, sp_q, sp_r, sumerr_p, sumerr_q, sumerr_r, fb_p, fb_q, fb_r, delta_t) pprz_msg_send_RATE_LOOP(&((_trans).trans_tx), &((_dev).device), AC_ID, sp_p, sp_q, sp_r, sumerr_p, sumerr_q, sumerr_r, fb_p, fb_q, fb_r, delta_t)
static inline void pprz_msg_send_RATE_LOOP(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_sp_p, float *_sp_q, float *_sp_r, float *_sumerr_p, float *_sumerr_q, float *_sumerr_r, float *_fb_p, float *_fb_q, float *_fb_r, int32_t *_delta_t) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_RATE_LOOP, "RATE_LOOP");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _sp_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _sp_q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _sp_r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _sumerr_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _sumerr_q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _sumerr_r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fb_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fb_q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fb_r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _delta_t, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_FILTER_ALIGNER(_trans, _dev, lp_gp, lp_gq, lp_gr, gp, gq, gr, noise, cnt, status) pprz_msg_send_FILTER_ALIGNER(&((_trans).trans_tx), &((_dev).device), AC_ID, lp_gp, lp_gq, lp_gr, gp, gq, gr, noise, cnt, status)
static inline void pprz_msg_send_FILTER_ALIGNER(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_lp_gp, int32_t *_lp_gq, int32_t *_lp_gr, int32_t *_gp, int32_t *_gq, int32_t *_gr, int32_t *_noise, int32_t *_cnt, uint8_t *_status) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_FILTER_ALIGNER, "FILTER_ALIGNER");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lp_gp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lp_gq, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lp_gr, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _gp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _gq, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _gr, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _noise, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cnt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _status, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AIRSPEED_MS45XX(_trans, _dev, diffPress, temperature, airspeed) pprz_msg_send_AIRSPEED_MS45XX(&((_trans).trans_tx), &((_dev).device), AC_ID, diffPress, temperature, airspeed)
static inline void pprz_msg_send_AIRSPEED_MS45XX(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_diffPress, int16_t *_temperature, float *_airspeed) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AIRSPEED_MS45XX, "AIRSPEED_MS45XX");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _diffPress, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _temperature, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _airspeed, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_FILTER_COR(_trans, _dev, mphi, mtheta, mpsi, qi, qx, qy, qz) pprz_msg_send_FILTER_COR(&((_trans).trans_tx), &((_dev).device), AC_ID, mphi, mtheta, mpsi, qi, qx, qy, qz)
static inline void pprz_msg_send_FILTER_COR(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_mphi, int32_t *_mtheta, int32_t *_mpsi, int32_t *_qi, int32_t *_qx, int32_t *_qy, int32_t *_qz) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_FILTER_COR, "FILTER_COR");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _mphi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _mtheta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _mpsi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _qi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _qx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _qy, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _qz, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_STAB_ATTITUDE_INT(_trans, _dev, est_p, est_q, est_r, est_phi, est_theta, est_psi, sp_phi, sp_theta, sp_psi, sum_err_phi, sum_err_theta, sum_err_psi, delta_a_fb, delta_e_fb, delta_r_fb, delta_a_ff, delta_e_ff, delta_r_ff, delta_a, delta_e, delta_r) pprz_msg_send_STAB_ATTITUDE_INT(&((_trans).trans_tx), &((_dev).device), AC_ID, est_p, est_q, est_r, est_phi, est_theta, est_psi, sp_phi, sp_theta, sp_psi, sum_err_phi, sum_err_theta, sum_err_psi, delta_a_fb, delta_e_fb, delta_r_fb, delta_a_ff, delta_e_ff, delta_r_ff, delta_a, delta_e, delta_r)
static inline void pprz_msg_send_STAB_ATTITUDE_INT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_est_p, int32_t *_est_q, int32_t *_est_r, int32_t *_est_phi, int32_t *_est_theta, int32_t *_est_psi, int32_t *_sp_phi, int32_t *_sp_theta, int32_t *_sp_psi, int32_t *_sum_err_phi, int32_t *_sum_err_theta, int32_t *_sum_err_psi, int32_t *_delta_a_fb, int32_t *_delta_e_fb, int32_t *_delta_r_fb, int32_t *_delta_a_ff, int32_t *_delta_e_ff, int32_t *_delta_r_ff, int32_t *_delta_a, int32_t *_delta_e, int32_t *_delta_r) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_STAB_ATTITUDE_INT, "STAB_ATTITUDE_INT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sp_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sp_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sp_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sum_err_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sum_err_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sum_err_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _delta_a_fb, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _delta_e_fb, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _delta_r_fb, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _delta_a_ff, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _delta_e_ff, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _delta_r_ff, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _delta_a, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _delta_e, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _delta_r, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_STAB_ATTITUDE_REF_INT(_trans, _dev, sp_phi, sp_theta, sp_psi, ref_phi, ref_theta, ref_psi, ref_p, ref_q, ref_r, ref_pd, ref_qd, ref_rd) pprz_msg_send_STAB_ATTITUDE_REF_INT(&((_trans).trans_tx), &((_dev).device), AC_ID, sp_phi, sp_theta, sp_psi, ref_phi, ref_theta, ref_psi, ref_p, ref_q, ref_r, ref_pd, ref_qd, ref_rd)
static inline void pprz_msg_send_STAB_ATTITUDE_REF_INT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_sp_phi, int32_t *_sp_theta, int32_t *_sp_psi, int32_t *_ref_phi, int32_t *_ref_theta, int32_t *_ref_psi, int32_t *_ref_p, int32_t *_ref_q, int32_t *_ref_r, int32_t *_ref_pd, int32_t *_ref_qd, int32_t *_ref_rd) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_STAB_ATTITUDE_REF_INT, "STAB_ATTITUDE_REF_INT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sp_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sp_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sp_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_pd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_qd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_rd, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_STAB_ATTITUDE_REF_FLOAT(_trans, _dev, sp_phi, sp_theta, sp_psi, ref_phi, ref_theta, ref_psi, ref_p, ref_q, ref_r, ref_pd, ref_qd, ref_rd) pprz_msg_send_STAB_ATTITUDE_REF_FLOAT(&((_trans).trans_tx), &((_dev).device), AC_ID, sp_phi, sp_theta, sp_psi, ref_phi, ref_theta, ref_psi, ref_p, ref_q, ref_r, ref_pd, ref_qd, ref_rd)
static inline void pprz_msg_send_STAB_ATTITUDE_REF_FLOAT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_sp_phi, float *_sp_theta, float *_sp_psi, float *_ref_phi, float *_ref_theta, float *_ref_psi, float *_ref_p, float *_ref_q, float *_ref_r, float *_ref_pd, float *_ref_qd, float *_ref_rd) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_STAB_ATTITUDE_REF_FLOAT, "STAB_ATTITUDE_REF_FLOAT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _sp_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _sp_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _sp_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ref_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ref_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ref_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ref_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ref_q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ref_r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ref_pd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ref_qd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ref_rd, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ROTORCRAFT_CMD(_trans, _dev, cmd_roll, cmd_pitch, cmd_yaw, cmd_thrust) pprz_msg_send_ROTORCRAFT_CMD(&((_trans).trans_tx), &((_dev).device), AC_ID, cmd_roll, cmd_pitch, cmd_yaw, cmd_thrust)
static inline void pprz_msg_send_ROTORCRAFT_CMD(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_cmd_roll, int32_t *_cmd_pitch, int32_t *_cmd_yaw, int32_t *_cmd_thrust) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ROTORCRAFT_CMD, "ROTORCRAFT_CMD");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cmd_roll, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cmd_pitch, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cmd_yaw, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cmd_thrust, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GUIDANCE_H_INT(_trans, _dev, sp_x, sp_y, ref_x, ref_y, est_x, est_y) pprz_msg_send_GUIDANCE_H_INT(&((_trans).trans_tx), &((_dev).device), AC_ID, sp_x, sp_y, ref_x, ref_y, est_x, est_y)
static inline void pprz_msg_send_GUIDANCE_H_INT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_sp_x, int32_t *_sp_y, int32_t *_ref_x, int32_t *_ref_y, int32_t *_est_x, int32_t *_est_y) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GUIDANCE_H_INT, "GUIDANCE_H_INT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sp_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sp_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_y, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_VERT_LOOP(_trans, _dev, z_sp, zd_sp, est_z, est_zd, est_zdd, ref_z, ref_zd, ref_zdd, adp_inv_m, adp_cov, adp_meas, sum_err, ff_cmd, fb_cmd, delta_t) pprz_msg_send_VERT_LOOP(&((_trans).trans_tx), &((_dev).device), AC_ID, z_sp, zd_sp, est_z, est_zd, est_zdd, ref_z, ref_zd, ref_zdd, adp_inv_m, adp_cov, adp_meas, sum_err, ff_cmd, fb_cmd, delta_t)
static inline void pprz_msg_send_VERT_LOOP(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_z_sp, int32_t *_zd_sp, int32_t *_est_z, int32_t *_est_zd, int32_t *_est_zdd, int32_t *_ref_z, int32_t *_ref_zd, int32_t *_ref_zdd, int32_t *_adp_inv_m, int32_t *_adp_cov, int32_t *_adp_meas, int32_t *_sum_err, int32_t *_ff_cmd, int32_t *_fb_cmd, int32_t *_delta_t) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_VERT_LOOP, "VERT_LOOP");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _z_sp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _zd_sp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_z, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_zd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_zdd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_z, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_zd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_zdd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _adp_inv_m, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _adp_cov, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _adp_meas, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sum_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ff_cmd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _fb_cmd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _delta_t, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_HOVER_LOOP(_trans, _dev, sp_x, sp_y, est_x, est_y, est_xd, est_yd, est_xdd, est_ydd, err_x, err_y, err_xd, err_yd, err_sum_x, err_sum_y, cmd_x, cmd_y, cmd_heading) pprz_msg_send_HOVER_LOOP(&((_trans).trans_tx), &((_dev).device), AC_ID, sp_x, sp_y, est_x, est_y, est_xd, est_yd, est_xdd, est_ydd, err_x, err_y, err_xd, err_yd, err_sum_x, err_sum_y, cmd_x, cmd_y, cmd_heading)
static inline void pprz_msg_send_HOVER_LOOP(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_sp_x, int32_t *_sp_y, int32_t *_est_x, int32_t *_est_y, int32_t *_est_xd, int32_t *_est_yd, int32_t *_est_xdd, int32_t *_est_ydd, int32_t *_err_x, int32_t *_err_y, int32_t *_err_xd, int32_t *_err_yd, int32_t *_err_sum_x, int32_t *_err_sum_y, int32_t *_cmd_x, int32_t *_cmd_y, int32_t *_cmd_heading) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_HOVER_LOOP, "HOVER_LOOP");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sp_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sp_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_xd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_yd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_xdd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_ydd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _err_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _err_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _err_xd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _err_yd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _err_sum_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _err_sum_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cmd_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cmd_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cmd_heading, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ROTORCRAFT_FP(_trans, _dev, east, north, up, veast, vnorth, vup, phi, theta, psi, carrot_east, carrot_north, carrot_up, carrot_psi, thrust, flight_time) pprz_msg_send_ROTORCRAFT_FP(&((_trans).trans_tx), &((_dev).device), AC_ID, east, north, up, veast, vnorth, vup, phi, theta, psi, carrot_east, carrot_north, carrot_up, carrot_psi, thrust, flight_time)
static inline void pprz_msg_send_ROTORCRAFT_FP(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_east, int32_t *_north, int32_t *_up, int32_t *_veast, int32_t *_vnorth, int32_t *_vup, int32_t *_phi, int32_t *_theta, int32_t *_psi, int32_t *_carrot_east, int32_t *_carrot_north, int32_t *_carrot_up, int32_t *_carrot_psi, int32_t *_thrust, uint16_t *_flight_time) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ROTORCRAFT_FP, "ROTORCRAFT_FP");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _up, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _veast, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _vnorth, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _vup, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _carrot_east, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _carrot_north, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _carrot_up, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _carrot_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _thrust, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _flight_time, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TEMP_ADC(_trans, _dev, temp1, temp2, temp3) pprz_msg_send_TEMP_ADC(&((_trans).trans_tx), &((_dev).device), AC_ID, temp1, temp2, temp3)
static inline void pprz_msg_send_TEMP_ADC(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_temp1, float *_temp2, float *_temp3) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TEMP_ADC, "TEMP_ADC");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _temp1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _temp2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _temp3, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GUIDANCE_H_REF_INT(_trans, _dev, sp_x, ref_x, sp_xd, ref_xd, ref_xdd, sp_y, ref_y, sp_yd, ref_yd, ref_ydd) pprz_msg_send_GUIDANCE_H_REF_INT(&((_trans).trans_tx), &((_dev).device), AC_ID, sp_x, ref_x, sp_xd, ref_xd, ref_xdd, sp_y, ref_y, sp_yd, ref_yd, ref_ydd)
static inline void pprz_msg_send_GUIDANCE_H_REF_INT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_sp_x, int32_t *_ref_x, int32_t *_sp_xd, int32_t *_ref_xd, int32_t *_ref_xdd, int32_t *_sp_y, int32_t *_ref_y, int32_t *_sp_yd, int32_t *_ref_yd, int32_t *_ref_ydd) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GUIDANCE_H_REF_INT, "GUIDANCE_H_REF_INT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sp_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sp_xd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_xd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_xdd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sp_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _sp_yd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_yd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_ydd, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ROTORCRAFT_TUNE_HOVER(_trans, _dev, rc_roll, rc_pitch, rc_yaw, cmd_roll, cmd_pitch, cmd_yaw, cmd_thrust, body_phi, body_theta, body_psi) pprz_msg_send_ROTORCRAFT_TUNE_HOVER(&((_trans).trans_tx), &((_dev).device), AC_ID, rc_roll, rc_pitch, rc_yaw, cmd_roll, cmd_pitch, cmd_yaw, cmd_thrust, body_phi, body_theta, body_psi)
static inline void pprz_msg_send_ROTORCRAFT_TUNE_HOVER(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_rc_roll, int16_t *_rc_pitch, int16_t *_rc_yaw, int32_t *_cmd_roll, int32_t *_cmd_pitch, int32_t *_cmd_yaw, int32_t *_cmd_thrust, int32_t *_body_phi, int32_t *_body_theta, int32_t *_body_psi) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ROTORCRAFT_TUNE_HOVER, "ROTORCRAFT_TUNE_HOVER");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _rc_roll, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _rc_pitch, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _rc_yaw, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cmd_roll, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cmd_pitch, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cmd_yaw, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cmd_thrust, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_psi, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_INS_Z(_trans, _dev, baro_z, ins_z, ins_zd, ins_zdd) pprz_msg_send_INS_Z(&((_trans).trans_tx), &((_dev).device), AC_ID, baro_z, ins_z, ins_zd, ins_zdd)
static inline void pprz_msg_send_INS_Z(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_baro_z, int32_t *_ins_z, int32_t *_ins_zd, int32_t *_ins_zdd) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_INS_Z, "INS_Z");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _baro_z, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ins_z, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ins_zd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ins_zdd, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_PCAP01_STATUS(_trans, _dev, ihumid, itemp, humid, temp) pprz_msg_send_PCAP01_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, ihumid, itemp, humid, temp)
static inline void pprz_msg_send_PCAP01_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_ihumid, uint32_t *_itemp, float *_humid, float *_temp) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_PCAP01_STATUS, "PCAP01_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _ihumid, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _itemp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _humid, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _temp, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GEIGER_COUNTER(_trans, _dev, tube1, tube2, vsupply) pprz_msg_send_GEIGER_COUNTER(&((_trans).trans_tx), &((_dev).device), AC_ID, tube1, tube2, vsupply)
static inline void pprz_msg_send_GEIGER_COUNTER(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_tube1, uint32_t *_tube2, uint16_t *_vsupply) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GEIGER_COUNTER, "GEIGER_COUNTER");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _tube1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _tube2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _vsupply, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_INS_REF(_trans, _dev, ecef_x0, ecef_y0, ecef_z0, lat0, lon0, alt0, hmsl0, baro_qfe) pprz_msg_send_INS_REF(&((_trans).trans_tx), &((_dev).device), AC_ID, ecef_x0, ecef_y0, ecef_z0, lat0, lon0, alt0, hmsl0, baro_qfe)
static inline void pprz_msg_send_INS_REF(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_ecef_x0, int32_t *_ecef_y0, int32_t *_ecef_z0, int32_t *_lat0, int32_t *_lon0, int32_t *_alt0, int32_t *_hmsl0, float *_baro_qfe) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_INS_REF, "INS_REF");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_x0, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_y0, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_z0, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lat0, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lon0, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _alt0, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _hmsl0, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _baro_qfe, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GPS_INT(_trans, _dev, ecef_x, ecef_y, ecef_z, lat, lon, alt, hmsl, ecef_xd, ecef_yd, ecef_zd, pacc, sacc, tow, pdop, numsv, fix, comp_id) pprz_msg_send_GPS_INT(&((_trans).trans_tx), &((_dev).device), AC_ID, ecef_x, ecef_y, ecef_z, lat, lon, alt, hmsl, ecef_xd, ecef_yd, ecef_zd, pacc, sacc, tow, pdop, numsv, fix, comp_id)
static inline void pprz_msg_send_GPS_INT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_ecef_x, int32_t *_ecef_y, int32_t *_ecef_z, int32_t *_lat, int32_t *_lon, int32_t *_alt, int32_t *_hmsl, int32_t *_ecef_xd, int32_t *_ecef_yd, int32_t *_ecef_zd, uint32_t *_pacc, uint32_t *_sacc, uint32_t *_tow, uint16_t *_pdop, uint8_t *_numsv, uint8_t *_fix, uint8_t *_comp_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+2+1+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+2+1+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+2+1+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GPS_INT, "GPS_INT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_z, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _hmsl, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_xd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_yd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ecef_zd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _pacc, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _sacc, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _tow, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _pdop, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _numsv, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _fix, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _comp_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AHRS_EULER_INT(_trans, _dev, imu_phi, imu_theta, imu_psi, body_phi, body_theta, body_psi, comp_id) pprz_msg_send_AHRS_EULER_INT(&((_trans).trans_tx), &((_dev).device), AC_ID, imu_phi, imu_theta, imu_psi, body_phi, body_theta, body_psi, comp_id)
static inline void pprz_msg_send_AHRS_EULER_INT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_imu_phi, int32_t *_imu_theta, int32_t *_imu_psi, int32_t *_body_phi, int32_t *_body_theta, int32_t *_body_psi, uint8_t *_comp_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AHRS_EULER_INT, "AHRS_EULER_INT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _comp_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AHRS_QUAT_INT(_trans, _dev, weight, imu_qi, imu_qx, imu_qy, imu_qz, body_qi, body_qx, body_qy, body_qz, comp_id) pprz_msg_send_AHRS_QUAT_INT(&((_trans).trans_tx), &((_dev).device), AC_ID, weight, imu_qi, imu_qx, imu_qy, imu_qz, body_qi, body_qx, body_qy, body_qz, comp_id)
static inline void pprz_msg_send_AHRS_QUAT_INT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_weight, int32_t *_imu_qi, int32_t *_imu_qx, int32_t *_imu_qy, int32_t *_imu_qz, int32_t *_body_qi, int32_t *_body_qx, int32_t *_body_qy, int32_t *_body_qz, uint8_t *_comp_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AHRS_QUAT_INT, "AHRS_QUAT_INT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _weight, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_qi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_qx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_qy, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_qz, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_qi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_qx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_qy, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_qz, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _comp_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AHRS_RMAT_INT(_trans, _dev, imu_m00, imu_m01, imu_m02, imu_m10, imu_m11, imu_m12, imu_m20, imu_m21, imu_m22, body_m00, body_m01, body_m02, body_m10, body_m11, body_m12, body_m20, body_m21, body_m22, comp_id) pprz_msg_send_AHRS_RMAT_INT(&((_trans).trans_tx), &((_dev).device), AC_ID, imu_m00, imu_m01, imu_m02, imu_m10, imu_m11, imu_m12, imu_m20, imu_m21, imu_m22, body_m00, body_m01, body_m02, body_m10, body_m11, body_m12, body_m20, body_m21, body_m22, comp_id)
static inline void pprz_msg_send_AHRS_RMAT_INT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_imu_m00, int32_t *_imu_m01, int32_t *_imu_m02, int32_t *_imu_m10, int32_t *_imu_m11, int32_t *_imu_m12, int32_t *_imu_m20, int32_t *_imu_m21, int32_t *_imu_m22, int32_t *_body_m00, int32_t *_body_m01, int32_t *_body_m02, int32_t *_body_m10, int32_t *_body_m11, int32_t *_body_m12, int32_t *_body_m20, int32_t *_body_m21, int32_t *_body_m22, uint8_t *_comp_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AHRS_RMAT_INT, "AHRS_RMAT_INT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_m00, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_m01, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_m02, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_m10, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_m11, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_m12, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_m20, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_m21, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _imu_m22, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_m00, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_m01, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_m02, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_m10, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_m11, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_m12, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_m20, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_m21, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_m22, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _comp_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ROTORCRAFT_NAV_STATUS(_trans, _dev, block_time, stage_time, dist_home, dist_wp, cur_block, cur_stage, horizontal_mode) pprz_msg_send_ROTORCRAFT_NAV_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, block_time, stage_time, dist_home, dist_wp, cur_block, cur_stage, horizontal_mode)
static inline void pprz_msg_send_ROTORCRAFT_NAV_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_block_time, uint16_t *_stage_time, float *_dist_home, float *_dist_wp, uint8_t *_cur_block, uint8_t *_cur_stage, uint8_t *_horizontal_mode) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+4+4+1+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+4+4+1+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+4+4+1+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ROTORCRAFT_NAV_STATUS, "ROTORCRAFT_NAV_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _block_time, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _stage_time, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _dist_home, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _dist_wp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _cur_block, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _cur_stage, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _horizontal_mode, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ROTORCRAFT_RADIO_CONTROL(_trans, _dev, roll, pitch, yaw, throttle, mode, kill, status) pprz_msg_send_ROTORCRAFT_RADIO_CONTROL(&((_trans).trans_tx), &((_dev).device), AC_ID, roll, pitch, yaw, throttle, mode, kill, status)
static inline void pprz_msg_send_ROTORCRAFT_RADIO_CONTROL(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_roll, int16_t *_pitch, int16_t *_yaw, int16_t *_throttle, int16_t *_mode, int16_t *_kill, uint8_t *_status) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+2+2+2+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+2+2+2+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+2+2+2+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ROTORCRAFT_RADIO_CONTROL, "ROTORCRAFT_RADIO_CONTROL");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _roll, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _pitch, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _yaw, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _throttle, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _mode, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _kill, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _status, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_VFF_EXTENDED(_trans, _dev, meas_baro, meas_alt, z, zd, zdd, bias, offset) pprz_msg_send_VFF_EXTENDED(&((_trans).trans_tx), &((_dev).device), AC_ID, meas_baro, meas_alt, z, zd, zdd, bias, offset)
static inline void pprz_msg_send_VFF_EXTENDED(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_meas_baro, float *_meas_alt, float *_z, float *_zd, float *_zdd, float *_bias, float *_offset) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_VFF_EXTENDED, "VFF_EXTENDED");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _meas_baro, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _meas_alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _z, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _zd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _zdd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bias, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _offset, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_VFF(_trans, _dev, measure, z, zd, bias, Pzz, Pzdzd, Pbb) pprz_msg_send_VFF(&((_trans).trans_tx), &((_dev).device), AC_ID, measure, z, zd, bias, Pzz, Pzdzd, Pbb)
static inline void pprz_msg_send_VFF(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_measure, float *_z, float *_zd, float *_bias, float *_Pzz, float *_Pzdzd, float *_Pbb) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_VFF, "VFF");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _measure, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _z, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _zd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bias, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Pzz, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Pzdzd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Pbb, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GEO_MAG(_trans, _dev, Hx, Hy, Hz, comp_id) pprz_msg_send_GEO_MAG(&((_trans).trans_tx), &((_dev).device), AC_ID, Hx, Hy, Hz, comp_id)
static inline void pprz_msg_send_GEO_MAG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_Hx, float *_Hy, float *_Hz, uint8_t *_comp_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GEO_MAG, "GEO_MAG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Hx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Hy, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Hz, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _comp_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_HFF(_trans, _dev, x, y, xd, yd, xdd, ydd) pprz_msg_send_HFF(&((_trans).trans_tx), &((_dev).device), AC_ID, x, y, xd, yd, xdd, ydd)
static inline void pprz_msg_send_HFF(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_x, float *_y, float *_xd, float *_yd, float *_xdd, float *_ydd) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_HFF, "HFF");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _xd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _yd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _xdd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ydd, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_HFF_DBG(_trans, _dev, x_measure, y_measure, xd_measure, yd_measure, Pxx, Pyy, Pxdxd, Pydyd) pprz_msg_send_HFF_DBG(&((_trans).trans_tx), &((_dev).device), AC_ID, x_measure, y_measure, xd_measure, yd_measure, Pxx, Pyy, Pxdxd, Pydyd)
static inline void pprz_msg_send_HFF_DBG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_x_measure, float *_y_measure, float *_xd_measure, float *_yd_measure, float *_Pxx, float *_Pyy, float *_Pxdxd, float *_Pydyd) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_HFF_DBG, "HFF_DBG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _x_measure, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _y_measure, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _xd_measure, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _yd_measure, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Pxx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Pyy, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Pxdxd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _Pydyd, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_HFF_GPS(_trans, _dev, lag_cnt, lag_cnt_err, save_cnt) pprz_msg_send_HFF_GPS(&((_trans).trans_tx), &((_dev).device), AC_ID, lag_cnt, lag_cnt_err, save_cnt)
static inline void pprz_msg_send_HFF_GPS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_lag_cnt, int16_t *_lag_cnt_err, int16_t *_save_cnt) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_HFF_GPS, "HFF_GPS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _lag_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _lag_cnt_err, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _save_cnt, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_INS_SONAR(_trans, _dev, distance, var) pprz_msg_send_INS_SONAR(&((_trans).trans_tx), &((_dev).device), AC_ID, distance, var)
static inline void pprz_msg_send_INS_SONAR(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_distance, float *_var) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_INS_SONAR, "INS_SONAR");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _distance, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _var, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ROTORCRAFT_CAM(_trans, _dev, tilt, pan) pprz_msg_send_ROTORCRAFT_CAM(&((_trans).trans_tx), &((_dev).device), AC_ID, tilt, pan)
static inline void pprz_msg_send_ROTORCRAFT_CAM(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_tilt, int16_t *_pan) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ROTORCRAFT_CAM, "ROTORCRAFT_CAM");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _tilt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _pan, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AHRS_REF_QUAT(_trans, _dev, ref_qi, ref_qx, ref_qy, ref_qz, body_qi, body_qx, body_qy, body_qz) pprz_msg_send_AHRS_REF_QUAT(&((_trans).trans_tx), &((_dev).device), AC_ID, ref_qi, ref_qx, ref_qy, ref_qz, body_qi, body_qx, body_qy, body_qz)
static inline void pprz_msg_send_AHRS_REF_QUAT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_ref_qi, int32_t *_ref_qx, int32_t *_ref_qy, int32_t *_ref_qz, int32_t *_body_qi, int32_t *_body_qx, int32_t *_body_qy, int32_t *_body_qz) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AHRS_REF_QUAT, "AHRS_REF_QUAT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_qi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_qx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_qy, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_qz, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_qi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_qx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_qy, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _body_qz, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_EKF7_XHAT(_trans, _dev, c, s1, s2, s3, p, q, r, bp, bq, br) pprz_msg_send_EKF7_XHAT(&((_trans).trans_tx), &((_dev).device), AC_ID, c, s1, s2, s3, p, q, r, bp, bq, br)
static inline void pprz_msg_send_EKF7_XHAT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_c, float *_s1, float *_s2, float *_s3, float *_p, float *_q, float *_r, float *_bp, float *_bq, float *_br) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_EKF7_XHAT, "EKF7_XHAT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _c, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _s1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _s2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _s3, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bq, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _br, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_EKF7_Y(_trans, _dev, timecount, g1, g2, g3, m1, m2, m3, p, q, r) pprz_msg_send_EKF7_Y(&((_trans).trans_tx), &((_dev).device), AC_ID, timecount, g1, g2, g3, m1, m2, m3, p, q, r)
static inline void pprz_msg_send_EKF7_Y(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_timecount, float *_g1, float *_g2, float *_g3, float *_m1, float *_m2, float *_m3, float *_p, float *_q, float *_r) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_EKF7_Y, "EKF7_Y");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _timecount, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _g1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _g2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _g3, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _m1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _m2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _m3, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _r, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_EKF7_P_DIAG(_trans, _dev, c, s1, s2, s3, p, q, r, bp, bq, br) pprz_msg_send_EKF7_P_DIAG(&((_trans).trans_tx), &((_dev).device), AC_ID, c, s1, s2, s3, p, q, r, bp, bq, br)
static inline void pprz_msg_send_EKF7_P_DIAG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_c, float *_s1, float *_s2, float *_s3, float *_p, float *_q, float *_r, float *_bp, float *_bq, float *_br) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_EKF7_P_DIAG, "EKF7_P_DIAG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _c, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _s1, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _s2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _s3, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bq, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _br, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AHRS_EULER(_trans, _dev, phi, theta, psi, comp_id) pprz_msg_send_AHRS_EULER(&((_trans).trans_tx), &((_dev).device), AC_ID, phi, theta, psi, comp_id)
static inline void pprz_msg_send_AHRS_EULER(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_phi, float *_theta, float *_psi, uint8_t *_comp_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AHRS_EULER, "AHRS_EULER");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _comp_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AHRS_MEASUREMENT_EULER(_trans, _dev, phi, theta, psi) pprz_msg_send_AHRS_MEASUREMENT_EULER(&((_trans).trans_tx), &((_dev).device), AC_ID, phi, theta, psi)
static inline void pprz_msg_send_AHRS_MEASUREMENT_EULER(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_phi, float *_theta, float *_psi) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AHRS_MEASUREMENT_EULER, "AHRS_MEASUREMENT_EULER");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _psi, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_WT(_trans, _dev, rpm) pprz_msg_send_WT(&((_trans).trans_tx), &((_dev).device), AC_ID, rpm)
static inline void pprz_msg_send_WT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_rpm) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_WT, "WT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _rpm, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_CSC_CAN_DEBUG(_trans, _dev, err_nb, err_code) pprz_msg_send_CSC_CAN_DEBUG(&((_trans).trans_tx), &((_dev).device), AC_ID, err_nb, err_code)
static inline void pprz_msg_send_CSC_CAN_DEBUG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_err_nb, uint32_t *_err_code) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_CSC_CAN_DEBUG, "CSC_CAN_DEBUG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _err_nb, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _err_code, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_CSC_CAN_MSG(_trans, _dev, frame, id, data_a, data_b) pprz_msg_send_CSC_CAN_MSG(&((_trans).trans_tx), &((_dev).device), AC_ID, frame, id, data_a, data_b)
static inline void pprz_msg_send_CSC_CAN_MSG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_frame, uint32_t *_id, uint32_t *_data_a, uint32_t *_data_b) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_CSC_CAN_MSG, "CSC_CAN_MSG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _frame, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _id, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _data_a, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _data_b, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AHRS_GYRO_BIAS_INT(_trans, _dev, bp, bq, br, comp_id) pprz_msg_send_AHRS_GYRO_BIAS_INT(&((_trans).trans_tx), &((_dev).device), AC_ID, bp, bq, br, comp_id)
static inline void pprz_msg_send_AHRS_GYRO_BIAS_INT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_bp, int32_t *_bq, int32_t *_br, uint8_t *_comp_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AHRS_GYRO_BIAS_INT, "AHRS_GYRO_BIAS_INT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _bp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _bq, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _br, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _comp_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AEROPROBE(_trans, _dev, counter, velocity, a_attack, a_sideslip, altitude, dynamic_p, static_p, checksum) pprz_msg_send_AEROPROBE(&((_trans).trans_tx), &((_dev).device), AC_ID, counter, velocity, a_attack, a_sideslip, altitude, dynamic_p, static_p, checksum)
static inline void pprz_msg_send_AEROPROBE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_counter, int16_t *_velocity, int16_t *_a_attack, int16_t *_a_sideslip, int32_t *_altitude, int32_t *_dynamic_p, int32_t *_static_p, uint8_t *_checksum) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+2+2+2+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+2+2+2+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+2+2+2+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AEROPROBE, "AEROPROBE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _counter, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _velocity, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _a_attack, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _a_sideslip, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _altitude, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _dynamic_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _static_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _checksum, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_FMS_TIME(_trans, _dev, tv_sec, tv_nsec, delay_ns) pprz_msg_send_FMS_TIME(&((_trans).trans_tx), &((_dev).device), AC_ID, tv_sec, tv_nsec, delay_ns)
static inline void pprz_msg_send_FMS_TIME(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_tv_sec, uint32_t *_tv_nsec, uint32_t *_delay_ns) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_FMS_TIME, "FMS_TIME");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _tv_sec, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _tv_nsec, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _delay_ns, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_LOADCELL(_trans, _dev, load) pprz_msg_send_LOADCELL(&((_trans).trans_tx), &((_dev).device), AC_ID, load)
static inline void pprz_msg_send_LOADCELL(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_load) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_LOADCELL, "LOADCELL");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _load, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_FLA_DEBUG(_trans, _dev, past_input, imu_rate, desired_accel, motor_command) pprz_msg_send_FLA_DEBUG(&((_trans).trans_tx), &((_dev).device), AC_ID, past_input, imu_rate, desired_accel, motor_command)
static inline void pprz_msg_send_FLA_DEBUG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_past_input, float *_imu_rate, float *_desired_accel, float *_motor_command) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_FLA_DEBUG, "FLA_DEBUG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _past_input, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _imu_rate, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _desired_accel, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _motor_command, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_BLMC_FAULT_STATUS(_trans, _dev, nb_raw_fault, raw_fault) pprz_msg_send_BLMC_FAULT_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_raw_fault, raw_fault)
static inline void pprz_msg_send_BLMC_FAULT_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_raw_fault, uint16_t *_raw_fault) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_raw_fault*2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_raw_fault*2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_raw_fault*2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_BLMC_FAULT_STATUS, "BLMC_FAULT_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_raw_fault, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_ARRAY, (void *) _raw_fault, nb_raw_fault*2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_BLMC_SPEEDS(_trans, _dev, nb_speeds, speeds) pprz_msg_send_BLMC_SPEEDS(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_speeds, speeds)
static inline void pprz_msg_send_BLMC_SPEEDS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_speeds, int16_t *_speeds) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_speeds*2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_speeds*2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_speeds*2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_BLMC_SPEEDS, "BLMC_SPEEDS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_speeds, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_ARRAY, (void *) _speeds, nb_speeds*2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AHRS_DEBUG_QUAT(_trans, _dev, jqi, jqx, jqy, jqz, xqi, xqx, xqy, xqz, mqi, mqx, mqy, mqz) pprz_msg_send_AHRS_DEBUG_QUAT(&((_trans).trans_tx), &((_dev).device), AC_ID, jqi, jqx, jqy, jqz, xqi, xqx, xqy, xqz, mqi, mqx, mqy, mqz)
static inline void pprz_msg_send_AHRS_DEBUG_QUAT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_jqi, float *_jqx, float *_jqy, float *_jqz, float *_xqi, float *_xqx, float *_xqy, float *_xqz, float *_mqi, float *_mqx, float *_mqy, float *_mqz) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AHRS_DEBUG_QUAT, "AHRS_DEBUG_QUAT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _jqi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _jqx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _jqy, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _jqz, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _xqi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _xqx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _xqy, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _xqz, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mqi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mqx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mqy, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mqz, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_BLMC_BUSVOLTS(_trans, _dev, nb_busvolts, busvolts) pprz_msg_send_BLMC_BUSVOLTS(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_busvolts, busvolts)
static inline void pprz_msg_send_BLMC_BUSVOLTS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_busvolts, uint16_t *_busvolts) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_busvolts*2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_busvolts*2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_busvolts*2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_BLMC_BUSVOLTS, "BLMC_BUSVOLTS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_busvolts, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_ARRAY, (void *) _busvolts, nb_busvolts*2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SYSTEM_STATUS(_trans, _dev, csc1_loop_count, csc1_msg_count, csc2_loop_count, csc2_msg_count, can_rx_err, can_tx_err, rc_parser_err, system_fault) pprz_msg_send_SYSTEM_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, csc1_loop_count, csc1_msg_count, csc2_loop_count, csc2_msg_count, can_rx_err, can_tx_err, rc_parser_err, system_fault)
static inline void pprz_msg_send_SYSTEM_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_csc1_loop_count, uint32_t *_csc1_msg_count, uint32_t *_csc2_loop_count, uint32_t *_csc2_msg_count, uint32_t *_can_rx_err, uint32_t *_can_tx_err, uint32_t *_rc_parser_err, uint8_t *_system_fault) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SYSTEM_STATUS, "SYSTEM_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _csc1_loop_count, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _csc1_msg_count, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _csc2_loop_count, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _csc2_msg_count, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _can_rx_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _can_tx_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _rc_parser_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _system_fault, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_DYNAMIXEL(_trans, _dev, left_wing, right_wing, left_wing_flag, right_wing_flag, invalid_position, timeout_events, checksum_errors, fuse_rotation_angle, fuse_rotation_rate) pprz_msg_send_DYNAMIXEL(&((_trans).trans_tx), &((_dev).device), AC_ID, left_wing, right_wing, left_wing_flag, right_wing_flag, invalid_position, timeout_events, checksum_errors, fuse_rotation_angle, fuse_rotation_rate)
static inline void pprz_msg_send_DYNAMIXEL(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_left_wing, uint16_t *_right_wing, uint8_t *_left_wing_flag, uint8_t *_right_wing_flag, uint32_t *_invalid_position, uint32_t *_timeout_events, uint32_t *_checksum_errors, float *_fuse_rotation_angle, float *_fuse_rotation_rate) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+1+1+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+1+1+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+1+1+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_DYNAMIXEL, "DYNAMIXEL");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _left_wing, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _right_wing, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _left_wing_flag, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _right_wing_flag, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _invalid_position, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _timeout_events, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _checksum_errors, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fuse_rotation_angle, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fuse_rotation_rate, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_RMAT_DEBUG(_trans, _dev, a, b, c, d, e, f, g, h, i) pprz_msg_send_RMAT_DEBUG(&((_trans).trans_tx), &((_dev).device), AC_ID, a, b, c, d, e, f, g, h, i)
static inline void pprz_msg_send_RMAT_DEBUG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_a, float *_b, float *_c, float *_d, float *_e, float *_f, float *_g, float *_h, float *_i) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_RMAT_DEBUG, "RMAT_DEBUG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _a, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _b, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _c, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _d, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _e, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _f, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _g, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _h, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _i, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SIMPLE_COMMANDS(_trans, _dev, roll, pitch, yaw) pprz_msg_send_SIMPLE_COMMANDS(&((_trans).trans_tx), &((_dev).device), AC_ID, roll, pitch, yaw)
static inline void pprz_msg_send_SIMPLE_COMMANDS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int16_t *_roll, int16_t *_pitch, int16_t *_yaw) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SIMPLE_COMMANDS, "SIMPLE_COMMANDS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _roll, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _pitch, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _yaw, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_VANE_SENSOR(_trans, _dev, alpha, alpha_filtered, alpha_target, alpha_vane_error, alpha2, beta, beta_filtered, beta_target, beta_vane_error, beta2) pprz_msg_send_VANE_SENSOR(&((_trans).trans_tx), &((_dev).device), AC_ID, alpha, alpha_filtered, alpha_target, alpha_vane_error, alpha2, beta, beta_filtered, beta_target, beta_vane_error, beta2)
static inline void pprz_msg_send_VANE_SENSOR(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_alpha, float *_alpha_filtered, float *_alpha_target, float *_alpha_vane_error, float *_alpha2, float *_beta, float *_beta_filtered, float *_beta_target, float *_beta_vane_error, float *_beta2) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_VANE_SENSOR, "VANE_SENSOR");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _alpha, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _alpha_filtered, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _alpha_target, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _alpha_vane_error, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _alpha2, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _beta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _beta_filtered, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _beta_target, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _beta_vane_error, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _beta2, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_CONTROLLER_GAINS(_trans, _dev, roll_gamma_p, roll_gamma_d, roll_gamma_i, pitch_gamma_p, pitch_gamma_d, pitch_gamma_i, yaw_gamma_p, yaw_gamma_d, yaw_gamma_i) pprz_msg_send_CONTROLLER_GAINS(&((_trans).trans_tx), &((_dev).device), AC_ID, roll_gamma_p, roll_gamma_d, roll_gamma_i, pitch_gamma_p, pitch_gamma_d, pitch_gamma_i, yaw_gamma_p, yaw_gamma_d, yaw_gamma_i)
static inline void pprz_msg_send_CONTROLLER_GAINS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_roll_gamma_p, float *_roll_gamma_d, float *_roll_gamma_i, float *_pitch_gamma_p, float *_pitch_gamma_d, float *_pitch_gamma_i, float *_yaw_gamma_p, float *_yaw_gamma_d, float *_yaw_gamma_i) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_CONTROLLER_GAINS, "CONTROLLER_GAINS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _roll_gamma_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _roll_gamma_d, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _roll_gamma_i, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pitch_gamma_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pitch_gamma_d, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pitch_gamma_i, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _yaw_gamma_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _yaw_gamma_d, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _yaw_gamma_i, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AHRS_LKF(_trans, _dev, phi, theta, psi, qi, qx, qy, qz, p, q, r, ax, ay, az, mx, my, mz) pprz_msg_send_AHRS_LKF(&((_trans).trans_tx), &((_dev).device), AC_ID, phi, theta, psi, qi, qx, qy, qz, p, q, r, ax, ay, az, mx, my, mz)
static inline void pprz_msg_send_AHRS_LKF(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_phi, float *_theta, float *_psi, float *_qi, float *_qx, float *_qy, float *_qz, float *_p, float *_q, float *_r, float *_ax, float *_ay, float *_az, float *_mx, float *_my, float *_mz) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AHRS_LKF, "AHRS_LKF");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _qi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _qx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _qy, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _qz, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ax, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ay, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _az, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _my, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mz, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AHRS_LKF_DEBUG(_trans, _dev, phi_err, theta_err, psi_err, bp, bq, br, quat_norm, phi_accel, theta_accel, phi_cov, theta_cov, psi_cov, bp_cov, bq_cov, br_cov) pprz_msg_send_AHRS_LKF_DEBUG(&((_trans).trans_tx), &((_dev).device), AC_ID, phi_err, theta_err, psi_err, bp, bq, br, quat_norm, phi_accel, theta_accel, phi_cov, theta_cov, psi_cov, bp_cov, bq_cov, br_cov)
static inline void pprz_msg_send_AHRS_LKF_DEBUG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_phi_err, float *_theta_err, float *_psi_err, float *_bp, float *_bq, float *_br, float *_quat_norm, float *_phi_accel, float *_theta_accel, float *_phi_cov, float *_theta_cov, float *_psi_cov, float *_bp_cov, float *_bq_cov, float *_br_cov) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AHRS_LKF_DEBUG, "AHRS_LKF_DEBUG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _phi_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _theta_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _psi_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bq, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _br, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _quat_norm, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _phi_accel, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _theta_accel, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _phi_cov, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _theta_cov, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _psi_cov, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bp_cov, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bq_cov, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _br_cov, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AHRS_LKF_ACC_DBG(_trans, _dev, qi_err, qx_err, qy_err, qz_err, bp_err, bq_err, br_err) pprz_msg_send_AHRS_LKF_ACC_DBG(&((_trans).trans_tx), &((_dev).device), AC_ID, qi_err, qx_err, qy_err, qz_err, bp_err, bq_err, br_err)
static inline void pprz_msg_send_AHRS_LKF_ACC_DBG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_qi_err, float *_qx_err, float *_qy_err, float *_qz_err, float *_bp_err, float *_bq_err, float *_br_err) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AHRS_LKF_ACC_DBG, "AHRS_LKF_ACC_DBG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _qi_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _qx_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _qy_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _qz_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bp_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bq_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _br_err, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AHRS_LKF_MAG_DBG(_trans, _dev, qi_err, qx_err, qy_err, qz_err, bp_err, bq_err, br_err) pprz_msg_send_AHRS_LKF_MAG_DBG(&((_trans).trans_tx), &((_dev).device), AC_ID, qi_err, qx_err, qy_err, qz_err, bp_err, bq_err, br_err)
static inline void pprz_msg_send_AHRS_LKF_MAG_DBG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_qi_err, float *_qx_err, float *_qy_err, float *_qz_err, float *_bp_err, float *_bq_err, float *_br_err) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AHRS_LKF_MAG_DBG, "AHRS_LKF_MAG_DBG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _qi_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _qx_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _qy_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _qz_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bp_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bq_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _br_err, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_NPS_SENSORS_SCALED(_trans, _dev, acc_x, acc_y, acc_z, mag_x, mag_y, mag_z) pprz_msg_send_NPS_SENSORS_SCALED(&((_trans).trans_tx), &((_dev).device), AC_ID, acc_x, acc_y, acc_z, mag_x, mag_y, mag_z)
static inline void pprz_msg_send_NPS_SENSORS_SCALED(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_acc_x, float *_acc_y, float *_acc_z, float *_mag_x, float *_mag_y, float *_mag_z) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_NPS_SENSORS_SCALED, "NPS_SENSORS_SCALED");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _acc_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _acc_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _acc_z, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mag_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mag_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mag_z, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_INS(_trans, _dev, ins_x, ins_y, ins_z, ins_xd, ins_yd, ins_zd, ins_xdd, ins_ydd, ins_zdd) pprz_msg_send_INS(&((_trans).trans_tx), &((_dev).device), AC_ID, ins_x, ins_y, ins_z, ins_xd, ins_yd, ins_zd, ins_xdd, ins_ydd, ins_zdd)
static inline void pprz_msg_send_INS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_ins_x, int32_t *_ins_y, int32_t *_ins_z, int32_t *_ins_xd, int32_t *_ins_yd, int32_t *_ins_zd, int32_t *_ins_xdd, int32_t *_ins_ydd, int32_t *_ins_zdd) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_INS, "INS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ins_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ins_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ins_z, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ins_xd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ins_yd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ins_zd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ins_xdd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ins_ydd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ins_zdd, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GPS_ERROR(_trans, _dev, x_position, y_position, z_position, x_velocity, y_velocity, z_velocity) pprz_msg_send_GPS_ERROR(&((_trans).trans_tx), &((_dev).device), AC_ID, x_position, y_position, z_position, x_velocity, y_velocity, z_velocity)
static inline void pprz_msg_send_GPS_ERROR(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_x_position, float *_y_position, float *_z_position, float *_x_velocity, float *_y_velocity, float *_z_velocity) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GPS_ERROR, "GPS_ERROR");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _x_position, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _y_position, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _z_position, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _x_velocity, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _y_velocity, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _z_velocity, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMU_GYRO(_trans, _dev, gp, gq, gr) pprz_msg_send_IMU_GYRO(&((_trans).trans_tx), &((_dev).device), AC_ID, gp, gq, gr)
static inline void pprz_msg_send_IMU_GYRO(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_gp, float *_gq, float *_gr) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMU_GYRO, "IMU_GYRO");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _gp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _gq, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _gr, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMU_MAG(_trans, _dev, mx, my, mz) pprz_msg_send_IMU_MAG(&((_trans).trans_tx), &((_dev).device), AC_ID, mx, my, mz)
static inline void pprz_msg_send_IMU_MAG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_mx, float *_my, float *_mz) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMU_MAG, "IMU_MAG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _my, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _mz, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMU_ACCEL(_trans, _dev, ax, ay, az) pprz_msg_send_IMU_ACCEL(&((_trans).trans_tx), &((_dev).device), AC_ID, ax, ay, az)
static inline void pprz_msg_send_IMU_ACCEL(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_ax, float *_ay, float *_az) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMU_ACCEL, "IMU_ACCEL");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ax, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ay, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _az, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMU_GYRO_RAW(_trans, _dev, gp, gq, gr) pprz_msg_send_IMU_GYRO_RAW(&((_trans).trans_tx), &((_dev).device), AC_ID, gp, gq, gr)
static inline void pprz_msg_send_IMU_GYRO_RAW(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_gp, int32_t *_gq, int32_t *_gr) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMU_GYRO_RAW, "IMU_GYRO_RAW");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _gp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _gq, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _gr, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMU_ACCEL_RAW(_trans, _dev, ax, ay, az) pprz_msg_send_IMU_ACCEL_RAW(&((_trans).trans_tx), &((_dev).device), AC_ID, ax, ay, az)
static inline void pprz_msg_send_IMU_ACCEL_RAW(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_ax, int32_t *_ay, int32_t *_az) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMU_ACCEL_RAW, "IMU_ACCEL_RAW");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ax, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ay, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _az, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMU_MAG_RAW(_trans, _dev, mx, my, mz) pprz_msg_send_IMU_MAG_RAW(&((_trans).trans_tx), &((_dev).device), AC_ID, mx, my, mz)
static inline void pprz_msg_send_IMU_MAG_RAW(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_mx, int32_t *_my, int32_t *_mz) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMU_MAG_RAW, "IMU_MAG_RAW");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _mx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _my, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _mz, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMU_MAG_SETTINGS(_trans, _dev, inclination, declination, hardiron_x, hardiron_y, hardiron_z) pprz_msg_send_IMU_MAG_SETTINGS(&((_trans).trans_tx), &((_dev).device), AC_ID, inclination, declination, hardiron_x, hardiron_y, hardiron_z)
static inline void pprz_msg_send_IMU_MAG_SETTINGS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_inclination, float *_declination, float *_hardiron_x, float *_hardiron_y, float *_hardiron_z) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMU_MAG_SETTINGS, "IMU_MAG_SETTINGS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _inclination, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _declination, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _hardiron_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _hardiron_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _hardiron_z, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMU_MAG_CURRENT_CALIBRATION(_trans, _dev, mx, my, mz, electrical_current) pprz_msg_send_IMU_MAG_CURRENT_CALIBRATION(&((_trans).trans_tx), &((_dev).device), AC_ID, mx, my, mz, electrical_current)
static inline void pprz_msg_send_IMU_MAG_CURRENT_CALIBRATION(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_mx, int32_t *_my, int32_t *_mz, int32_t *_electrical_current) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMU_MAG_CURRENT_CALIBRATION, "IMU_MAG_CURRENT_CALIBRATION");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _mx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _my, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _mz, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _electrical_current, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_UART_ERRORS(_trans, _dev, overrun_cnt, noise_err_cnt, framing_err_cnt, bus_number) pprz_msg_send_UART_ERRORS(&((_trans).trans_tx), &((_dev).device), AC_ID, overrun_cnt, noise_err_cnt, framing_err_cnt, bus_number)
static inline void pprz_msg_send_UART_ERRORS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_overrun_cnt, uint16_t *_noise_err_cnt, uint16_t *_framing_err_cnt, uint8_t *_bus_number) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_UART_ERRORS, "UART_ERRORS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _overrun_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _noise_err_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _framing_err_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _bus_number, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMU_GYRO_LP(_trans, _dev, gp, gq, gr) pprz_msg_send_IMU_GYRO_LP(&((_trans).trans_tx), &((_dev).device), AC_ID, gp, gq, gr)
static inline void pprz_msg_send_IMU_GYRO_LP(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_gp, float *_gq, float *_gr) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMU_GYRO_LP, "IMU_GYRO_LP");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _gp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _gq, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _gr, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMU_PRESSURE(_trans, _dev, p) pprz_msg_send_IMU_PRESSURE(&((_trans).trans_tx), &((_dev).device), AC_ID, p)
static inline void pprz_msg_send_IMU_PRESSURE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_p) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMU_PRESSURE, "IMU_PRESSURE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _p, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMU_HS_GYRO(_trans, _dev, axis, nb_samples, samples) pprz_msg_send_IMU_HS_GYRO(&((_trans).trans_tx), &((_dev).device), AC_ID, axis, nb_samples, samples)
static inline void pprz_msg_send_IMU_HS_GYRO(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_axis, uint8_t nb_samples, uint32_t *_samples) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+nb_samples*4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+nb_samples*4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+nb_samples*4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMU_HS_GYRO, "IMU_HS_GYRO");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _axis, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_samples, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_ARRAY, (void *) _samples, nb_samples*4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TEST_PASSTHROUGH_STATUS(_trans, _dev, io_proc_msg_cnt, io_proc_err_cnt, io_link_msg_cnt, io_link_err_cnt, rc_status) pprz_msg_send_TEST_PASSTHROUGH_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, io_proc_msg_cnt, io_proc_err_cnt, io_link_msg_cnt, io_link_err_cnt, rc_status)
static inline void pprz_msg_send_TEST_PASSTHROUGH_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_io_proc_msg_cnt, uint32_t *_io_proc_err_cnt, uint32_t *_io_link_msg_cnt, uint32_t *_io_link_err_cnt, uint8_t *_rc_status) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TEST_PASSTHROUGH_STATUS, "TEST_PASSTHROUGH_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _io_proc_msg_cnt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _io_proc_err_cnt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _io_link_msg_cnt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _io_link_err_cnt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _rc_status, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TUNE_VERT(_trans, _dev, z_sp, est_z, ref_z, ref_zd) pprz_msg_send_TUNE_VERT(&((_trans).trans_tx), &((_dev).device), AC_ID, z_sp, est_z, ref_z, ref_zd)
static inline void pprz_msg_send_TUNE_VERT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_z_sp, int32_t *_est_z, int32_t *_ref_z, int32_t *_ref_zd) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TUNE_VERT, "TUNE_VERT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _z_sp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _est_z, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_z, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _ref_zd, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_MF_DAQ_STATE(_trans, _dev, flight_time, p, q, r, phi, theta, psi, ax, ay, az, ve, vn, vu, lat, lon, alt, we, wn) pprz_msg_send_MF_DAQ_STATE(&((_trans).trans_tx), &((_dev).device), AC_ID, flight_time, p, q, r, phi, theta, psi, ax, ay, az, ve, vn, vu, lat, lon, alt, we, wn)
static inline void pprz_msg_send_MF_DAQ_STATE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_flight_time, float *_p, float *_q, float *_r, float *_phi, float *_theta, float *_psi, float *_ax, float *_ay, float *_az, float *_ve, float *_vn, float *_vu, float *_lat, float *_lon, float *_alt, float *_we, float *_wn) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_MF_DAQ_STATE, "MF_DAQ_STATE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _flight_time, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ax, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ay, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _az, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ve, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _vn, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _vu, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _we, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _wn, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_INFO_MSG(_trans, _dev, nb_msg, msg) pprz_msg_send_INFO_MSG(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_msg, msg)
static inline void pprz_msg_send_INFO_MSG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_msg, char *_msg) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_msg*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_msg*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_msg*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_INFO_MSG, "INFO_MSG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_msg, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_CHAR, DL_FORMAT_ARRAY, (void *) _msg, nb_msg*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_STAB_ATTITUDE_INDI(_trans, _dev, angular_accel_p, angular_accel_q, angular_accel_r, angular_accel_ref_p, angular_accel_ref_q, angular_accel_ref_r, g1_p, g1_q, g1_r, g2_r) pprz_msg_send_STAB_ATTITUDE_INDI(&((_trans).trans_tx), &((_dev).device), AC_ID, angular_accel_p, angular_accel_q, angular_accel_r, angular_accel_ref_p, angular_accel_ref_q, angular_accel_ref_r, g1_p, g1_q, g1_r, g2_r)
static inline void pprz_msg_send_STAB_ATTITUDE_INDI(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_angular_accel_p, float *_angular_accel_q, float *_angular_accel_r, float *_angular_accel_ref_p, float *_angular_accel_ref_q, float *_angular_accel_ref_r, float *_g1_p, float *_g1_q, float *_g1_r, float *_g2_r) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_STAB_ATTITUDE_INDI, "STAB_ATTITUDE_INDI");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _angular_accel_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _angular_accel_q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _angular_accel_r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _angular_accel_ref_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _angular_accel_ref_q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _angular_accel_ref_r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _g1_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _g1_q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _g1_r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _g2_r, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_BEBOP_ACTUATORS(_trans, _dev, cmd_thrust, cmd_roll, cmd_pitch, cmd_yaw, rpm_ref_lf, rpm_ref_rf, rpm_ref_rb, rpm_ref_lb, rpm_obs_lf, rpm_obs_rf, rpm_obs_rb, rpm_obs_lb) pprz_msg_send_BEBOP_ACTUATORS(&((_trans).trans_tx), &((_dev).device), AC_ID, cmd_thrust, cmd_roll, cmd_pitch, cmd_yaw, rpm_ref_lf, rpm_ref_rf, rpm_ref_rb, rpm_ref_lb, rpm_obs_lf, rpm_obs_rf, rpm_obs_rb, rpm_obs_lb)
static inline void pprz_msg_send_BEBOP_ACTUATORS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, int32_t *_cmd_thrust, int32_t *_cmd_roll, int32_t *_cmd_pitch, int32_t *_cmd_yaw, uint16_t *_rpm_ref_lf, uint16_t *_rpm_ref_rf, uint16_t *_rpm_ref_rb, uint16_t *_rpm_ref_lb, uint16_t *_rpm_obs_lf, uint16_t *_rpm_obs_rf, uint16_t *_rpm_obs_rb, uint16_t *_rpm_obs_lb) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+2+2+2+2+2+2+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+2+2+2+2+2+2+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+2+2+2+2+2+2+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_BEBOP_ACTUATORS, "BEBOP_ACTUATORS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cmd_thrust, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cmd_roll, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cmd_pitch, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _cmd_yaw, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _rpm_ref_lf, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _rpm_ref_rf, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _rpm_ref_rb, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _rpm_ref_lb, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _rpm_obs_lf, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _rpm_obs_rf, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _rpm_obs_rb, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _rpm_obs_lb, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_WEATHER(_trans, _dev, p_amb, t_amb, windspeed, wind_from, humidity) pprz_msg_send_WEATHER(&((_trans).trans_tx), &((_dev).device), AC_ID, p_amb, t_amb, windspeed, wind_from, humidity)
static inline void pprz_msg_send_WEATHER(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_p_amb, float *_t_amb, float *_windspeed, float *_wind_from, float *_humidity) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_WEATHER, "WEATHER");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _p_amb, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _t_amb, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _windspeed, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _wind_from, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _humidity, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_IMU_TURNTABLE(_trans, _dev, omega) pprz_msg_send_IMU_TURNTABLE(&((_trans).trans_tx), &((_dev).device), AC_ID, omega)
static inline void pprz_msg_send_IMU_TURNTABLE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_omega) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_IMU_TURNTABLE, "IMU_TURNTABLE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _omega, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_BARO_RAW(_trans, _dev, abs, diff) pprz_msg_send_BARO_RAW(&((_trans).trans_tx), &((_dev).device), AC_ID, abs, diff)
static inline void pprz_msg_send_BARO_RAW(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_abs, float *_diff) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_BARO_RAW, "BARO_RAW");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _abs, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _diff, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AIR_DATA(_trans, _dev, pressure, diff_p, temp, qnh, amsl_baro, airspeed, tas) pprz_msg_send_AIR_DATA(&((_trans).trans_tx), &((_dev).device), AC_ID, pressure, diff_p, temp, qnh, amsl_baro, airspeed, tas)
static inline void pprz_msg_send_AIR_DATA(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_pressure, float *_diff_p, float *_temp, float *_qnh, float *_amsl_baro, float *_airspeed, float *_tas) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AIR_DATA, "AIR_DATA");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pressure, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _diff_p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _temp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _qnh, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _amsl_baro, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _airspeed, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _tas, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AMSL(_trans, _dev, AMSL_BARO, AMSL_GPS) pprz_msg_send_AMSL(&((_trans).trans_tx), &((_dev).device), AC_ID, AMSL_BARO, AMSL_GPS)
static inline void pprz_msg_send_AMSL(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_AMSL_BARO, float *_AMSL_GPS) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AMSL, "AMSL");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _AMSL_BARO, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _AMSL_GPS, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_DIVERGENCE(_trans, _dev, divergence, divergence_vision, normalized_thrust, cov_div, pstate, pused, sonar) pprz_msg_send_DIVERGENCE(&((_trans).trans_tx), &((_dev).device), AC_ID, divergence, divergence_vision, normalized_thrust, cov_div, pstate, pused, sonar)
static inline void pprz_msg_send_DIVERGENCE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_divergence, float *_divergence_vision, float *_normalized_thrust, float *_cov_div, float *_pstate, float *_pused, float *_sonar) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_DIVERGENCE, "DIVERGENCE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _divergence, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _divergence_vision, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _normalized_thrust, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _cov_div, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pstate, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pused, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _sonar, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_VIDEO_SYNC(_trans, _dev, id) pprz_msg_send_VIDEO_SYNC(&((_trans).trans_tx), &((_dev).device), AC_ID, id)
static inline void pprz_msg_send_VIDEO_SYNC(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_VIDEO_SYNC, "VIDEO_SYNC");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_PERIODIC_TELEMETRY_ERR(_trans, _dev, process, mode, id) pprz_msg_send_PERIODIC_TELEMETRY_ERR(&((_trans).trans_tx), &((_dev).device), AC_ID, process, mode, id)
static inline void pprz_msg_send_PERIODIC_TELEMETRY_ERR(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_process, uint8_t *_mode, uint8_t *_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_PERIODIC_TELEMETRY_ERR, "PERIODIC_TELEMETRY_ERR");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _process, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_TIME(_trans, _dev, t) pprz_msg_send_TIME(&((_trans).trans_tx), &((_dev).device), AC_ID, t)
static inline void pprz_msg_send_TIME(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_t) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_TIME, "TIME");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _t, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_OPTIC_FLOW_EST(_trans, _dev, fps, corner_cnt, tracked_cnt, flow_x, flow_y, flow_der_x, flow_der_y, vel_x, vel_y, div_size, surface_roughness, divergence) pprz_msg_send_OPTIC_FLOW_EST(&((_trans).trans_tx), &((_dev).device), AC_ID, fps, corner_cnt, tracked_cnt, flow_x, flow_y, flow_der_x, flow_der_y, vel_x, vel_y, div_size, surface_roughness, divergence)
static inline void pprz_msg_send_OPTIC_FLOW_EST(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_fps, uint16_t *_corner_cnt, uint16_t *_tracked_cnt, int16_t *_flow_x, int16_t *_flow_y, int16_t *_flow_der_x, int16_t *_flow_der_y, float *_vel_x, float *_vel_y, float *_div_size, float *_surface_roughness, float *_divergence) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+2+2+2+2+2+2+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+2+2+2+2+2+2+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+2+2+2+2+2+2+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_OPTIC_FLOW_EST, "OPTIC_FLOW_EST");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _fps, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _corner_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _tracked_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _flow_x, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _flow_y, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _flow_der_x, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _flow_der_y, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _vel_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _vel_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _div_size, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _surface_roughness, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _divergence, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_STEREO_IMG(_trans, _dev, frequency, data_size, nb_imageBuffer, imageBuffer) pprz_msg_send_STEREO_IMG(&((_trans).trans_tx), &((_dev).device), AC_ID, frequency, data_size, nb_imageBuffer, imageBuffer)
static inline void pprz_msg_send_STEREO_IMG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_frequency, uint8_t *_data_size, uint8_t nb_imageBuffer, uint8_t *_imageBuffer) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+1+nb_imageBuffer*1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+1+nb_imageBuffer*1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+1+nb_imageBuffer*1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_STEREO_IMG, "STEREO_IMG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _frequency, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _data_size, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_imageBuffer, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_ARRAY, (void *) _imageBuffer, nb_imageBuffer*1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ROTORCRAFT_STATUS(_trans, _dev, link_imu_nb_err, motor_nb_err, rc_status, frame_rate, gps_status, ap_mode, ap_in_flight, ap_motors_on, ap_h_mode, ap_v_mode, vsupply, cpu_time) pprz_msg_send_ROTORCRAFT_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, link_imu_nb_err, motor_nb_err, rc_status, frame_rate, gps_status, ap_mode, ap_in_flight, ap_motors_on, ap_h_mode, ap_v_mode, vsupply, cpu_time)
static inline void pprz_msg_send_ROTORCRAFT_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_link_imu_nb_err, uint8_t *_motor_nb_err, uint8_t *_rc_status, uint8_t *_frame_rate, uint8_t *_gps_status, uint8_t *_ap_mode, uint8_t *_ap_in_flight, uint8_t *_ap_motors_on, uint8_t *_ap_h_mode, uint8_t *_ap_v_mode, uint16_t *_vsupply, uint16_t *_cpu_time) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+1+1+1+1+1+1+1+1+1+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+1+1+1+1+1+1+1+1+1+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+1+1+1+1+1+1+1+1+1+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ROTORCRAFT_STATUS, "ROTORCRAFT_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _link_imu_nb_err, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _motor_nb_err, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _rc_status, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _frame_rate, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _gps_status, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ap_mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ap_in_flight, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ap_motors_on, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ap_h_mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _ap_v_mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _vsupply, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _cpu_time, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_STATE_FILTER_STATUS(_trans, _dev, id, state_filter_mode, value) pprz_msg_send_STATE_FILTER_STATUS(&((_trans).trans_tx), &((_dev).device), AC_ID, id, state_filter_mode, value)
static inline void pprz_msg_send_STATE_FILTER_STATUS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_id, uint8_t *_state_filter_mode, uint16_t *_value) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_STATE_FILTER_STATUS, "STATE_FILTER_STATUS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _state_filter_mode, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _value, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_PX4FLOW(_trans, _dev, sensor_id, flow_x, flow_y, flow_comp_m_x, flow_comp_m_y, quality, ground_distance) pprz_msg_send_PX4FLOW(&((_trans).trans_tx), &((_dev).device), AC_ID, sensor_id, flow_x, flow_y, flow_comp_m_x, flow_comp_m_y, quality, ground_distance)
static inline void pprz_msg_send_PX4FLOW(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_sensor_id, int16_t *_flow_x, int16_t *_flow_y, float *_flow_comp_m_x, float *_flow_comp_m_y, uint8_t *_quality, float *_ground_distance) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+2+2+4+4+1+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+2+2+4+4+1+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+2+2+4+4+1+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_PX4FLOW, "PX4FLOW");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _sensor_id, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _flow_x, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _flow_y, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _flow_comp_m_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _flow_comp_m_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _quality, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ground_distance, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_OPTICFLOW(_trans, _dev, flow, ref_alt) pprz_msg_send_OPTICFLOW(&((_trans).trans_tx), &((_dev).device), AC_ID, flow, ref_alt)
static inline void pprz_msg_send_OPTICFLOW(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_flow, float *_ref_alt) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_OPTICFLOW, "OPTICFLOW");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _flow, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ref_alt, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_VISUALTARGET(_trans, _dev, x, y) pprz_msg_send_VISUALTARGET(&((_trans).trans_tx), &((_dev).device), AC_ID, x, y)
static inline void pprz_msg_send_VISUALTARGET(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_x, uint16_t *_y) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_VISUALTARGET, "VISUALTARGET");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _x, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _y, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_SONAR(_trans, _dev, sonar_meas, sonar_distance) pprz_msg_send_SONAR(&((_trans).trans_tx), &((_dev).device), AC_ID, sonar_meas, sonar_distance)
static inline void pprz_msg_send_SONAR(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_sonar_meas, float *_sonar_distance) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_SONAR, "SONAR");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _sonar_meas, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _sonar_distance, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_PAYLOAD_FLOAT(_trans, _dev, nb_values, values) pprz_msg_send_PAYLOAD_FLOAT(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_values, values)
static inline void pprz_msg_send_PAYLOAD_FLOAT(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t nb_values, float *_values) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+nb_values*4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+nb_values*4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+nb_values*4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_PAYLOAD_FLOAT, "PAYLOAD_FLOAT");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_ARRAY_LENGTH, DL_FORMAT_SCALAR, (void *) &nb_values, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_ARRAY, (void *) _values, nb_values*4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_NPS_POS_LLH(_trans, _dev, pprz_lat, lat_geod, lat_geoc, pprz_lon, lon, pprz_alt, alt_geod, agl, asl) pprz_msg_send_NPS_POS_LLH(&((_trans).trans_tx), &((_dev).device), AC_ID, pprz_lat, lat_geod, lat_geoc, pprz_lon, lon, pprz_alt, alt_geod, agl, asl)
static inline void pprz_msg_send_NPS_POS_LLH(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_pprz_lat, float *_lat_geod, float *_lat_geoc, float *_pprz_lon, float *_lon, float *_pprz_alt, float *_alt_geod, float *_agl, float *_asl) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_NPS_POS_LLH, "NPS_POS_LLH");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pprz_lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _lat_geod, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _lat_geoc, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pprz_lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pprz_alt, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _alt_geod, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _agl, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _asl, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_NPS_RPMS(_trans, _dev, front, back, right, left) pprz_msg_send_NPS_RPMS(&((_trans).trans_tx), &((_dev).device), AC_ID, front, back, right, left)
static inline void pprz_msg_send_NPS_RPMS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_front, float *_back, float *_right, float *_left) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_NPS_RPMS, "NPS_RPMS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _front, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _back, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _right, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _left, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_NPS_SPEED_POS(_trans, _dev, ltpp_xdd, ltpp_ydd, ltpp_zdd, ltpp_xd, ltpp_yd, ltpp_zd, ltpp_x, ltpp_y, ltpp_z) pprz_msg_send_NPS_SPEED_POS(&((_trans).trans_tx), &((_dev).device), AC_ID, ltpp_xdd, ltpp_ydd, ltpp_zdd, ltpp_xd, ltpp_yd, ltpp_zd, ltpp_x, ltpp_y, ltpp_z)
static inline void pprz_msg_send_NPS_SPEED_POS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_ltpp_xdd, float *_ltpp_ydd, float *_ltpp_zdd, float *_ltpp_xd, float *_ltpp_yd, float *_ltpp_zd, float *_ltpp_x, float *_ltpp_y, float *_ltpp_z) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_NPS_SPEED_POS, "NPS_SPEED_POS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ltpp_xdd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ltpp_ydd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ltpp_zdd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ltpp_xd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ltpp_yd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ltpp_zd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ltpp_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ltpp_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ltpp_z, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_NPS_RATE_ATTITUDE(_trans, _dev, p, q, r, phi, theta, psi) pprz_msg_send_NPS_RATE_ATTITUDE(&((_trans).trans_tx), &((_dev).device), AC_ID, p, q, r, phi, theta, psi)
static inline void pprz_msg_send_NPS_RATE_ATTITUDE(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_p, float *_q, float *_r, float *_phi, float *_theta, float *_psi) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_NPS_RATE_ATTITUDE, "NPS_RATE_ATTITUDE");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _p, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _q, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _r, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _psi, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_NPS_GYRO_BIAS(_trans, _dev, bp, bq, br) pprz_msg_send_NPS_GYRO_BIAS(&((_trans).trans_tx), &((_dev).device), AC_ID, bp, bq, br)
static inline void pprz_msg_send_NPS_GYRO_BIAS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_bp, float *_bq, float *_br) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_NPS_GYRO_BIAS, "NPS_GYRO_BIAS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bp, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bq, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _br, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_NPS_RANGE_METER(_trans, _dev, dist) pprz_msg_send_NPS_RANGE_METER(&((_trans).trans_tx), &((_dev).device), AC_ID, dist)
static inline void pprz_msg_send_NPS_RANGE_METER(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_dist) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_NPS_RANGE_METER, "NPS_RANGE_METER");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _dist, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_NPS_WIND(_trans, _dev, vx, vy, vz) pprz_msg_send_NPS_WIND(&((_trans).trans_tx), &((_dev).device), AC_ID, vx, vy, vz)
static inline void pprz_msg_send_NPS_WIND(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_vx, float *_vy, float *_vz) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_NPS_WIND, "NPS_WIND");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _vx, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _vy, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _vz, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_ESC(_trans, _dev, amps, bat_volts, power, rpm, motor_volts, energy, motor_id) pprz_msg_send_ESC(&((_trans).trans_tx), &((_dev).device), AC_ID, amps, bat_volts, power, rpm, motor_volts, energy, motor_id)
static inline void pprz_msg_send_ESC(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_amps, float *_bat_volts, float *_power, float *_rpm, float *_motor_volts, float *_energy, uint8_t *_motor_id) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_ESC, "ESC");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _amps, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _bat_volts, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _power, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _rpm, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _motor_volts, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _energy, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _motor_id, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_RTOS_MON(_trans, _dev, nb_threads, cpu_load, core_free, heap_free) pprz_msg_send_RTOS_MON(&((_trans).trans_tx), &((_dev).device), AC_ID, nb_threads, cpu_load, core_free, heap_free)
static inline void pprz_msg_send_RTOS_MON(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_nb_threads, uint8_t *_cpu_load, uint32_t *_core_free, uint32_t *_heap_free) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_RTOS_MON, "RTOS_MON");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _nb_threads, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _cpu_load, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _core_free, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _heap_free, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_PPRZ_DEBUG(_trans, _dev, module, errno) pprz_msg_send_PPRZ_DEBUG(&((_trans).trans_tx), &((_dev).device), AC_ID, module, errno)
static inline void pprz_msg_send_PPRZ_DEBUG(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_module, uint8_t *_errno) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_PPRZ_DEBUG, "PPRZ_DEBUG");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _module, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _errno, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_NPS_ACCEL_LTP(_trans, _dev, xdd, ydd, zdd) pprz_msg_send_NPS_ACCEL_LTP(&((_trans).trans_tx), &((_dev).device), AC_ID, xdd, ydd, zdd)
static inline void pprz_msg_send_NPS_ACCEL_LTP(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_xdd, float *_ydd, float *_zdd) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_NPS_ACCEL_LTP, "NPS_ACCEL_LTP");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _xdd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _ydd, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _zdd, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_LOOSE_INS_GPS(_trans, _dev, status, time_running, q0, q1, q2, q3, phi, theta, psi, north, east, down, v_north, v_east, v_down, est_p, est_q, est_r, gyroBias_x, gyroBias_y, gyroBias_z, imuCallbacks, gpsCallbacks, baroCallbacks) pprz_msg_send_LOOSE_INS_GPS(&((_trans).trans_tx), &((_dev).device), AC_ID, status, time_running, q0, q1, q2, q3, phi, theta, psi, north, east, down, v_north, v_east, v_down, est_p, est_q, est_r, gyroBias_x, gyroBias_y, gyroBias_z, imuCallbacks, gpsCallbacks, baroCallbacks)
static inline void pprz_msg_send_LOOSE_INS_GPS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint8_t *_status, double *_time_running, double *_q0, double *_q1, double *_q2, double *_q3, double *_phi, double *_theta, double *_psi, double *_north, double *_east, double *_down, double *_v_north, double *_v_east, double *_v_down, double *_est_p, double *_est_q, double *_est_r, double *_gyroBias_x, double *_gyroBias_y, double *_gyroBias_z, uint32_t *_imuCallbacks, uint32_t *_gpsCallbacks, uint32_t *_baroCallbacks) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+1+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+1+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+1+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+8+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_LOOSE_INS_GPS, "LOOSE_INS_GPS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _status, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _time_running, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _q0, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _q1, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _q2, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _q3, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _phi, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _theta, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _psi, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _north, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _east, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _down, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _v_north, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _v_east, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _v_down, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _est_p, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _est_q, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _est_r, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _gyroBias_x, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _gyroBias_y, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _gyroBias_z, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _imuCallbacks, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _gpsCallbacks, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _baroCallbacks, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_AFL_COEFFS(_trans, _dev, roll_a, roll_b, roll_c, pitch_a, pitch_b, pitch_c, yaw_a, yaw_b, yaw_c) pprz_msg_send_AFL_COEFFS(&((_trans).trans_tx), &((_dev).device), AC_ID, roll_a, roll_b, roll_c, pitch_a, pitch_b, pitch_c, yaw_a, yaw_b, yaw_c)
static inline void pprz_msg_send_AFL_COEFFS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_roll_a, float *_roll_b, float *_roll_c, float *_pitch_a, float *_pitch_b, float *_pitch_c, float *_yaw_a, float *_yaw_b, float *_yaw_c) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_AFL_COEFFS, "AFL_COEFFS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _roll_a, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _roll_b, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _roll_c, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pitch_a, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pitch_b, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _pitch_c, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _yaw_a, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _yaw_b, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _yaw_c, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_GPS_SMALL(_trans, _dev, multiplex_speed, lat, lon, alt) pprz_msg_send_GPS_SMALL(&((_trans).trans_tx), &((_dev).device), AC_ID, multiplex_speed, lat, lon, alt)
static inline void pprz_msg_send_GPS_SMALL(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_multiplex_speed, int32_t *_lat, int32_t *_lon, int16_t *_alt) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+2 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+2 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+2 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_GPS_SMALL, "GPS_SMALL");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _multiplex_speed, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lat, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT32, DL_FORMAT_SCALAR, (void *) _lon, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_INT16, DL_FORMAT_SCALAR, (void *) _alt, 2);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_I2C_ERRORS(_trans, _dev, wd_reset_cnt, queue_full_cnt, acknowledge_failure_cnt, misplaced_start_or_stop_cnt, arbitration_lost_cnt, overrun_or_underrun_cnt, pec_error_in_reception_cnt, timeout_or_tlow_error_cnt, smbus_alert_cnt, unexpected_event_cnt, last_unexpected_event, bus_number) pprz_msg_send_I2C_ERRORS(&((_trans).trans_tx), &((_dev).device), AC_ID, wd_reset_cnt, queue_full_cnt, acknowledge_failure_cnt, misplaced_start_or_stop_cnt, arbitration_lost_cnt, overrun_or_underrun_cnt, pec_error_in_reception_cnt, timeout_or_tlow_error_cnt, smbus_alert_cnt, unexpected_event_cnt, last_unexpected_event, bus_number)
static inline void pprz_msg_send_I2C_ERRORS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint16_t *_wd_reset_cnt, uint16_t *_queue_full_cnt, uint16_t *_acknowledge_failure_cnt, uint16_t *_misplaced_start_or_stop_cnt, uint16_t *_arbitration_lost_cnt, uint16_t *_overrun_or_underrun_cnt, uint16_t *_pec_error_in_reception_cnt, uint16_t *_timeout_or_tlow_error_cnt, uint16_t *_smbus_alert_cnt, uint16_t *_unexpected_event_cnt, uint32_t *_last_unexpected_event, uint8_t *_bus_number) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+2+2+2+2+2+2+2+2+2+2+4+1 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+2+2+2+2+2+2+2+2+2+2+4+1 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+2+2+2+2+2+2+2+2+2+2+4+1 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_I2C_ERRORS, "I2C_ERRORS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _wd_reset_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _queue_full_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _acknowledge_failure_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _misplaced_start_or_stop_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _arbitration_lost_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _overrun_or_underrun_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _pec_error_in_reception_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _timeout_or_tlow_error_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _smbus_alert_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT16, DL_FORMAT_SCALAR, (void *) _unexpected_event_cnt, 2);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _last_unexpected_event, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _bus_number, 1);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_RDYB_TRAJECTORY(_trans, _dev, commanded_phi, commanded_theta, commanded_psi, setpoint_x, setpoint_y, setpoint_z) pprz_msg_send_RDYB_TRAJECTORY(&((_trans).trans_tx), &((_dev).device), AC_ID, commanded_phi, commanded_theta, commanded_psi, setpoint_x, setpoint_y, setpoint_z)
static inline void pprz_msg_send_RDYB_TRAJECTORY(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, float *_commanded_phi, float *_commanded_theta, float *_commanded_psi, float *_setpoint_x, float *_setpoint_y, float *_setpoint_z) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+4+4+4+4+4 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+4+4+4+4+4 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_RDYB_TRAJECTORY, "RDYB_TRAJECTORY");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _commanded_phi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _commanded_theta, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _commanded_psi, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _setpoint_x, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _setpoint_y, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_FLOAT, DL_FORMAT_SCALAR, (void *) _setpoint_z, 4);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#define DOWNLINK_SEND_HENRY_GNSS(_trans, _dev, last_imu_update, GPS_time, GPS_solution_valid, latitude, longitude, altitude, North, East, Down, SVs_Tracked, SVs_PVT, V_North, V_East, V_Down) pprz_msg_send_HENRY_GNSS(&((_trans).trans_tx), &((_dev).device), AC_ID, last_imu_update, GPS_time, GPS_solution_valid, latitude, longitude, altitude, North, East, Down, SVs_Tracked, SVs_PVT, V_North, V_East, V_Down)
static inline void pprz_msg_send_HENRY_GNSS(struct transport_tx *trans, struct link_device *dev, uint8_t ac_id, uint32_t *_last_imu_update, double *_GPS_time, uint8_t *_GPS_solution_valid, double *_latitude, double *_longitude, double *_altitude, double *_North, double *_East, double *_Down, uint8_t *_SVs_Tracked, uint8_t *_SVs_PVT, double *_V_North, double *_V_East, double *_V_Down) {
#if PPRZLINK_ENABLE_FD
  long _FD = 0; /* can be an address, an index, a file descriptor, ... */
#endif
  if (trans->check_available_space(trans->impl, dev, _FD_ADDR, trans->size_of(trans->impl, 0+4+8+1+8+8+8+8+8+8+1+1+8+8+8 +2 /* msg header overhead */))) {
    trans->count_bytes(trans->impl, dev, trans->size_of(trans->impl, 0+4+8+1+8+8+8+8+8+8+1+1+8+8+8 +2 /* msg header overhead */));
    trans->start_message(trans->impl, dev, _FD, 0+4+8+1+8+8+8+8+8+8+1+1+8+8+8 +2 /* msg header overhead */);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, &ac_id, 1);
    trans->put_named_byte(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, DL_HENRY_GNSS, "HENRY_GNSS");
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT32, DL_FORMAT_SCALAR, (void *) _last_imu_update, 4);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _GPS_time, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _GPS_solution_valid, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _latitude, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _longitude, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _altitude, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _North, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _East, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _Down, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _SVs_Tracked, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_UINT8, DL_FORMAT_SCALAR, (void *) _SVs_PVT, 1);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _V_North, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _V_East, 8);
    trans->put_bytes(trans->impl, dev, _FD, DL_TYPE_DOUBLE, DL_FORMAT_SCALAR, (void *) _V_Down, 8);
    trans->end_message(trans->impl, dev, _FD);
  } else
    trans->overrun(trans->impl, dev);
}

#else // DOWNLINK

#define DOWNLINK_SEND_AUTOPILOT_VERSION(_trans, _dev, version, nb_desc, desc) {}
static inline void pprz_send_msg_AUTOPILOT_VERSION(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_version __attribute__((unused)), uint8_t nb_desc __attribute__((unused)), char *_desc __attribute__((unused))) {}

#define DOWNLINK_SEND_ALIVE(_trans, _dev, nb_md5sum, md5sum) {}
static inline void pprz_send_msg_ALIVE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_md5sum __attribute__((unused)), uint8_t *_md5sum __attribute__((unused))) {}

#define DOWNLINK_SEND_PONG(_trans, _dev) {}
static inline void pprz_send_msg_PONG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused))) {}

#define DOWNLINK_SEND_TAKEOFF(_trans, _dev, cpu_time) {}
static inline void pprz_send_msg_TAKEOFF(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_cpu_time __attribute__((unused))) {}

#define DOWNLINK_SEND_ARDRONE_NAVDATA(_trans, _dev, taille, nu_trame, ax, ay, az, vx, vy, vz, temperature_acc, temperature_gyro, ultrasound, us_debut_echo, us_fin_echo, us_association_echo, us_distance_echo, us_curve_time, us_curve_value, us_curve_ref, nb_echo, sum_echo, gradient, flag_echo_ini, pressure, temperature_pressure, mx, my, mz, chksum, checksum_errors) {}
static inline void pprz_send_msg_ARDRONE_NAVDATA(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_taille __attribute__((unused)), uint16_t *_nu_trame __attribute__((unused)), uint16_t *_ax __attribute__((unused)), uint16_t *_ay __attribute__((unused)), uint16_t *_az __attribute__((unused)), int16_t *_vx __attribute__((unused)), int16_t *_vy __attribute__((unused)), int16_t *_vz __attribute__((unused)), uint16_t *_temperature_acc __attribute__((unused)), uint16_t *_temperature_gyro __attribute__((unused)), uint16_t *_ultrasound __attribute__((unused)), uint16_t *_us_debut_echo __attribute__((unused)), uint16_t *_us_fin_echo __attribute__((unused)), uint16_t *_us_association_echo __attribute__((unused)), uint16_t *_us_distance_echo __attribute__((unused)), uint16_t *_us_curve_time __attribute__((unused)), uint16_t *_us_curve_value __attribute__((unused)), uint16_t *_us_curve_ref __attribute__((unused)), uint16_t *_nb_echo __attribute__((unused)), uint32_t *_sum_echo __attribute__((unused)), int16_t *_gradient __attribute__((unused)), uint16_t *_flag_echo_ini __attribute__((unused)), int32_t *_pressure __attribute__((unused)), uint16_t *_temperature_pressure __attribute__((unused)), int16_t *_mx __attribute__((unused)), int16_t *_my __attribute__((unused)), int16_t *_mz __attribute__((unused)), uint16_t *_chksum __attribute__((unused)), uint32_t *_checksum_errors __attribute__((unused))) {}

#define DOWNLINK_SEND_ATTITUDE(_trans, _dev, phi, psi, theta) {}
static inline void pprz_send_msg_ATTITUDE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_phi __attribute__((unused)), float *_psi __attribute__((unused)), float *_theta __attribute__((unused))) {}

#define DOWNLINK_SEND_IR_SENSORS(_trans, _dev, ir1, ir2, longitudinal, lateral, vertical) {}
static inline void pprz_send_msg_IR_SENSORS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_ir1 __attribute__((unused)), int16_t *_ir2 __attribute__((unused)), int16_t *_longitudinal __attribute__((unused)), int16_t *_lateral __attribute__((unused)), int16_t *_vertical __attribute__((unused))) {}

#define DOWNLINK_SEND_GPS(_trans, _dev, mode, utm_east, utm_north, course, alt, speed, climb, week, itow, utm_zone, gps_nb_err) {}
static inline void pprz_send_msg_GPS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_mode __attribute__((unused)), int32_t *_utm_east __attribute__((unused)), int32_t *_utm_north __attribute__((unused)), int16_t *_course __attribute__((unused)), int32_t *_alt __attribute__((unused)), uint16_t *_speed __attribute__((unused)), int16_t *_climb __attribute__((unused)), uint16_t *_week __attribute__((unused)), uint32_t *_itow __attribute__((unused)), uint8_t *_utm_zone __attribute__((unused)), uint8_t *_gps_nb_err __attribute__((unused))) {}

#define DOWNLINK_SEND_NAVIGATION_REF(_trans, _dev, utm_east, utm_north, utm_zone, ground_alt) {}
static inline void pprz_send_msg_NAVIGATION_REF(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_utm_east __attribute__((unused)), int32_t *_utm_north __attribute__((unused)), uint8_t *_utm_zone __attribute__((unused)), float *_ground_alt __attribute__((unused))) {}

#define DOWNLINK_SEND_NAVIGATION(_trans, _dev, cur_block, cur_stage, pos_x, pos_y, dist_wp, dist_home, circle_count, oval_count) {}
static inline void pprz_send_msg_NAVIGATION(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_cur_block __attribute__((unused)), uint8_t *_cur_stage __attribute__((unused)), float *_pos_x __attribute__((unused)), float *_pos_y __attribute__((unused)), float *_dist_wp __attribute__((unused)), float *_dist_home __attribute__((unused)), uint8_t *_circle_count __attribute__((unused)), uint8_t *_oval_count __attribute__((unused))) {}

#define DOWNLINK_SEND_PPRZ_MODE(_trans, _dev, ap_mode, ap_gaz, ap_lateral, ap_horizontal, if_calib_mode, mcu1_status) {}
static inline void pprz_send_msg_PPRZ_MODE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ap_mode __attribute__((unused)), uint8_t *_ap_gaz __attribute__((unused)), uint8_t *_ap_lateral __attribute__((unused)), uint8_t *_ap_horizontal __attribute__((unused)), uint8_t *_if_calib_mode __attribute__((unused)), uint8_t *_mcu1_status __attribute__((unused))) {}

#define DOWNLINK_SEND_BAT(_trans, _dev, throttle, voltage, amps, flight_time, kill_auto_throttle, block_time, stage_time, energy) {}
static inline void pprz_send_msg_BAT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_throttle __attribute__((unused)), uint16_t *_voltage __attribute__((unused)), int16_t *_amps __attribute__((unused)), uint16_t *_flight_time __attribute__((unused)), uint8_t *_kill_auto_throttle __attribute__((unused)), uint16_t *_block_time __attribute__((unused)), uint16_t *_stage_time __attribute__((unused)), int16_t *_energy __attribute__((unused))) {}

#define DOWNLINK_SEND_DEBUG_MCU_LINK(_trans, _dev, i2c_nb_err, i2c_mcu1_nb_err, ppm_rate) {}
static inline void pprz_send_msg_DEBUG_MCU_LINK(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_i2c_nb_err __attribute__((unused)), uint8_t *_i2c_mcu1_nb_err __attribute__((unused)), uint8_t *_ppm_rate __attribute__((unused))) {}

#define DOWNLINK_SEND_CALIBRATION(_trans, _dev, climb_sum_err, climb_gaz_submode) {}
static inline void pprz_send_msg_CALIBRATION(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_climb_sum_err __attribute__((unused)), uint8_t *_climb_gaz_submode __attribute__((unused))) {}

#define DOWNLINK_SEND_SETTINGS(_trans, _dev, slider_1_val, slider_2_val) {}
static inline void pprz_send_msg_SETTINGS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_slider_1_val __attribute__((unused)), float *_slider_2_val __attribute__((unused))) {}

#define DOWNLINK_SEND_DESIRED(_trans, _dev, roll, pitch, course, x, y, altitude, climb, airspeed) {}
static inline void pprz_send_msg_DESIRED(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_roll __attribute__((unused)), float *_pitch __attribute__((unused)), float *_course __attribute__((unused)), float *_x __attribute__((unused)), float *_y __attribute__((unused)), float *_altitude __attribute__((unused)), float *_climb __attribute__((unused)), float *_airspeed __attribute__((unused))) {}

#define DOWNLINK_SEND_GPS_SOL(_trans, _dev, Pacc, Sacc, PDOP, numSV) {}
static inline void pprz_send_msg_GPS_SOL(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_Pacc __attribute__((unused)), uint32_t *_Sacc __attribute__((unused)), uint16_t *_PDOP __attribute__((unused)), uint8_t *_numSV __attribute__((unused))) {}

#define DOWNLINK_SEND_ADC_GENERIC(_trans, _dev, val1, val2) {}
static inline void pprz_send_msg_ADC_GENERIC(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_val1 __attribute__((unused)), uint16_t *_val2 __attribute__((unused))) {}

#define DOWNLINK_SEND_TEST_FORMAT(_trans, _dev, val1, val2) {}
static inline void pprz_send_msg_TEST_FORMAT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), double *_val1 __attribute__((unused)), float *_val2 __attribute__((unused))) {}

#define DOWNLINK_SEND_CAM(_trans, _dev, phi, theta, target_x, target_y) {}
static inline void pprz_send_msg_CAM(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_phi __attribute__((unused)), int16_t *_theta __attribute__((unused)), int16_t *_target_x __attribute__((unused)), int16_t *_target_y __attribute__((unused))) {}

#define DOWNLINK_SEND_CIRCLE(_trans, _dev, center_east, center_north, radius) {}
static inline void pprz_send_msg_CIRCLE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_center_east __attribute__((unused)), float *_center_north __attribute__((unused)), float *_radius __attribute__((unused))) {}

#define DOWNLINK_SEND_SEGMENT(_trans, _dev, segment_east_1, segment_north_1, segment_east_2, segment_north_2) {}
static inline void pprz_send_msg_SEGMENT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_segment_east_1 __attribute__((unused)), float *_segment_north_1 __attribute__((unused)), float *_segment_east_2 __attribute__((unused)), float *_segment_north_2 __attribute__((unused))) {}

#define DOWNLINK_SEND_VECTORNAV_INFO(_trans, _dev, timestamp, chksm_error, hdr_error, counter, ins_status, ins_err, YprU1, YprU2, YprU3) {}
static inline void pprz_send_msg_VECTORNAV_INFO(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_timestamp __attribute__((unused)), uint32_t *_chksm_error __attribute__((unused)), uint32_t *_hdr_error __attribute__((unused)), uint16_t *_counter __attribute__((unused)), uint8_t *_ins_status __attribute__((unused)), uint8_t *_ins_err __attribute__((unused)), float *_YprU1 __attribute__((unused)), float *_YprU2 __attribute__((unused)), float *_YprU3 __attribute__((unused))) {}

#define DOWNLINK_SEND_HYBRID_GUIDANCE(_trans, _dev, pos_x, pos_y, speed_x, speed_y, wind_x, wind_y, pos_err_x, pos_err_y, speed_sp_x, speed_sp_y, norm_ref_speed, heading_diff, phi, theta, psi) {}
static inline void pprz_send_msg_HYBRID_GUIDANCE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_pos_x __attribute__((unused)), int32_t *_pos_y __attribute__((unused)), int32_t *_speed_x __attribute__((unused)), int32_t *_speed_y __attribute__((unused)), int32_t *_wind_x __attribute__((unused)), int32_t *_wind_y __attribute__((unused)), int32_t *_pos_err_x __attribute__((unused)), int32_t *_pos_err_y __attribute__((unused)), int32_t *_speed_sp_x __attribute__((unused)), int32_t *_speed_sp_y __attribute__((unused)), int32_t *_norm_ref_speed __attribute__((unused)), int32_t *_heading_diff __attribute__((unused)), int32_t *_phi __attribute__((unused)), int32_t *_theta __attribute__((unused)), int32_t *_psi __attribute__((unused))) {}

#define DOWNLINK_SEND_SVINFO(_trans, _dev, chn, SVID, Flags, QI, CNO, Elev, Azim) {}
static inline void pprz_send_msg_SVINFO(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_chn __attribute__((unused)), uint8_t *_SVID __attribute__((unused)), uint8_t *_Flags __attribute__((unused)), uint8_t *_QI __attribute__((unused)), uint8_t *_CNO __attribute__((unused)), int8_t *_Elev __attribute__((unused)), int16_t *_Azim __attribute__((unused))) {}

#define DOWNLINK_SEND_DEBUG(_trans, _dev, nb_msg, msg) {}
static inline void pprz_send_msg_DEBUG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_msg __attribute__((unused)), uint8_t *_msg __attribute__((unused))) {}

#define DOWNLINK_SEND_SURVEY(_trans, _dev, east, north, west, south) {}
static inline void pprz_send_msg_SURVEY(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_east __attribute__((unused)), float *_north __attribute__((unused)), float *_west __attribute__((unused)), float *_south __attribute__((unused))) {}

#define DOWNLINK_SEND_RSSI(_trans, _dev, rssi, tx_power) {}
static inline void pprz_send_msg_RSSI(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_rssi __attribute__((unused)), uint8_t *_tx_power __attribute__((unused))) {}

#define DOWNLINK_SEND_RANGEFINDER(_trans, _dev, range, z_dot, z_dot_sum_err, z_dot_setpoint, z_sum_err, z_setpoint, flying) {}
static inline void pprz_send_msg_RANGEFINDER(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_range __attribute__((unused)), float *_z_dot __attribute__((unused)), float *_z_dot_sum_err __attribute__((unused)), float *_z_dot_setpoint __attribute__((unused)), float *_z_sum_err __attribute__((unused)), float *_z_setpoint __attribute__((unused)), uint8_t *_flying __attribute__((unused))) {}

#define DOWNLINK_SEND_DATALINK_REPORT(_trans, _dev, uplink_lost_time, uplink_nb_msgs, downlink_nb_msgs, downlink_rate, uplink_rate, downlink_ovrn) {}
static inline void pprz_send_msg_DATALINK_REPORT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_uplink_lost_time __attribute__((unused)), uint16_t *_uplink_nb_msgs __attribute__((unused)), uint16_t *_downlink_nb_msgs __attribute__((unused)), uint16_t *_downlink_rate __attribute__((unused)), uint16_t *_uplink_rate __attribute__((unused)), uint8_t *_downlink_ovrn __attribute__((unused))) {}

#define DOWNLINK_SEND_DL_VALUE(_trans, _dev, index, value) {}
static inline void pprz_send_msg_DL_VALUE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_index __attribute__((unused)), float *_value __attribute__((unused))) {}

#define DOWNLINK_SEND_MARK(_trans, _dev, ac_id, lat, long) {}
static inline void pprz_send_msg_MARK(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), float *_lat __attribute__((unused)), float *_long __attribute__((unused))) {}

#define DOWNLINK_SEND_SYS_MON(_trans, _dev, periodic_time, periodic_time_min, periodic_time_max, periodic_cycle, periodic_cycle_min, periodic_cycle_max, event_number, cpu_load) {}
static inline void pprz_send_msg_SYS_MON(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_periodic_time __attribute__((unused)), uint16_t *_periodic_time_min __attribute__((unused)), uint16_t *_periodic_time_max __attribute__((unused)), uint16_t *_periodic_cycle __attribute__((unused)), uint16_t *_periodic_cycle_min __attribute__((unused)), uint16_t *_periodic_cycle_max __attribute__((unused)), uint16_t *_event_number __attribute__((unused)), uint8_t *_cpu_load __attribute__((unused))) {}

#define DOWNLINK_SEND_MOTOR(_trans, _dev, rpm, current) {}
static inline void pprz_send_msg_MOTOR(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_rpm __attribute__((unused)), int32_t *_current __attribute__((unused))) {}

#define DOWNLINK_SEND_WP_MOVED(_trans, _dev, wp_id, utm_east, utm_north, alt, utm_zone) {}
static inline void pprz_send_msg_WP_MOVED(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_wp_id __attribute__((unused)), float *_utm_east __attribute__((unused)), float *_utm_north __attribute__((unused)), float *_alt __attribute__((unused)), uint8_t *_utm_zone __attribute__((unused))) {}

#define DOWNLINK_SEND_MKK(_trans, _dev, nr, rpm, current, temp) {}
static inline void pprz_send_msg_MKK(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_nr __attribute__((unused)), uint8_t *_rpm __attribute__((unused)), uint8_t *_current __attribute__((unused)), int8_t *_temp __attribute__((unused))) {}

#define DOWNLINK_SEND_ENERGY(_trans, _dev, bat, amp, energy, power) {}
static inline void pprz_send_msg_ENERGY(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_bat __attribute__((unused)), float *_amp __attribute__((unused)), uint16_t *_energy __attribute__((unused)), float *_power __attribute__((unused))) {}

#define DOWNLINK_SEND_WALDO_MSG(_trans, _dev, roll, yaw, pitch, fix, utm_east, utm_north, utm_zone, speed, week, itow, est_height) {}
static inline void pprz_send_msg_WALDO_MSG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_roll __attribute__((unused)), float *_yaw __attribute__((unused)), float *_pitch __attribute__((unused)), uint8_t *_fix __attribute__((unused)), int32_t *_utm_east __attribute__((unused)), int32_t *_utm_north __attribute__((unused)), uint8_t *_utm_zone __attribute__((unused)), uint16_t *_speed __attribute__((unused)), uint16_t *_week __attribute__((unused)), uint32_t *_itow __attribute__((unused)), float *_est_height __attribute__((unused))) {}

#define DOWNLINK_SEND_WALDO_DEBUG_MSG(_trans, _dev, countupfast) {}
static inline void pprz_send_msg_WALDO_DEBUG_MSG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_countupfast __attribute__((unused))) {}

#define DOWNLINK_SEND_SPEED_LOOP(_trans, _dev, ve_set_point, ve, vn_set_point, vn, north_sp, east_sp) {}
static inline void pprz_send_msg_SPEED_LOOP(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_ve_set_point __attribute__((unused)), float *_ve __attribute__((unused)), float *_vn_set_point __attribute__((unused)), float *_vn __attribute__((unused)), float *_north_sp __attribute__((unused)), float *_east_sp __attribute__((unused))) {}

#define DOWNLINK_SEND_ALT_KALMAN(_trans, _dev, p00, p01, p10, p11) {}
static inline void pprz_send_msg_ALT_KALMAN(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_p00 __attribute__((unused)), float *_p01 __attribute__((unused)), float *_p10 __attribute__((unused)), float *_p11 __attribute__((unused))) {}

#define DOWNLINK_SEND_ESTIMATOR(_trans, _dev, z, z_dot) {}
static inline void pprz_send_msg_ESTIMATOR(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_z __attribute__((unused)), float *_z_dot __attribute__((unused))) {}

#define DOWNLINK_SEND_TUNE_ROLL(_trans, _dev, p, phi, phi_sp) {}
static inline void pprz_send_msg_TUNE_ROLL(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_p __attribute__((unused)), float *_phi __attribute__((unused)), float *_phi_sp __attribute__((unused))) {}

#define DOWNLINK_SEND_BARO_MS5534A(_trans, _dev, pressure, temp, alt) {}
static inline void pprz_send_msg_BARO_MS5534A(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_pressure __attribute__((unused)), uint16_t *_temp __attribute__((unused)), float *_alt __attribute__((unused))) {}

#define DOWNLINK_SEND_PRESSURE(_trans, _dev, airspeed_adc, airspeed, altitude_adc, altitude) {}
static inline void pprz_send_msg_PRESSURE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_airspeed_adc __attribute__((unused)), float *_airspeed __attribute__((unused)), float *_altitude_adc __attribute__((unused)), float *_altitude __attribute__((unused))) {}

#define DOWNLINK_SEND_BARO_WORDS(_trans, _dev, w1, w2, w3, w4) {}
static inline void pprz_send_msg_BARO_WORDS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_w1 __attribute__((unused)), uint16_t *_w2 __attribute__((unused)), uint16_t *_w3 __attribute__((unused)), uint16_t *_w4 __attribute__((unused))) {}

#define DOWNLINK_SEND_WP_MOVED_LLA(_trans, _dev, wp_id, lat, lon, alt) {}
static inline void pprz_send_msg_WP_MOVED_LLA(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_wp_id __attribute__((unused)), int32_t *_lat __attribute__((unused)), int32_t *_lon __attribute__((unused)), int32_t *_alt __attribute__((unused))) {}

#define DOWNLINK_SEND_CHRONO(_trans, _dev, tag, time) {}
static inline void pprz_send_msg_CHRONO(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_tag __attribute__((unused)), uint32_t *_time __attribute__((unused))) {}

#define DOWNLINK_SEND_WP_MOVED_ENU(_trans, _dev, wp_id, east, north, up) {}
static inline void pprz_send_msg_WP_MOVED_ENU(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_wp_id __attribute__((unused)), int32_t *_east __attribute__((unused)), int32_t *_north __attribute__((unused)), int32_t *_up __attribute__((unused))) {}

#define DOWNLINK_SEND_WINDTURBINE_STATUS_(_trans, _dev, ac_id, tb_id, sync_itow, cycle_time) {}
static inline void pprz_send_msg_WINDTURBINE_STATUS_(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_tb_id __attribute__((unused)), uint32_t *_sync_itow __attribute__((unused)), uint32_t *_cycle_time __attribute__((unused))) {}

#define DOWNLINK_SEND_RC_3CH_(_trans, _dev, throttle_mode, roll, pitch) {}
static inline void pprz_send_msg_RC_3CH_(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_throttle_mode __attribute__((unused)), int8_t *_roll __attribute__((unused)), int8_t *_pitch __attribute__((unused))) {}

#define DOWNLINK_SEND_MPPT(_trans, _dev, nb_values, values) {}
static inline void pprz_send_msg_MPPT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_values __attribute__((unused)), int16_t *_values __attribute__((unused))) {}

#define DOWNLINK_SEND_DEBUG_IR_I2C(_trans, _dev, ir1, ir2, top) {}
static inline void pprz_send_msg_DEBUG_IR_I2C(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_ir1 __attribute__((unused)), int16_t *_ir2 __attribute__((unused)), int16_t *_top __attribute__((unused))) {}

#define DOWNLINK_SEND_AIRSPEED(_trans, _dev, airspeed, airspeed_sp, airspeed_cnt, groundspeed_sp) {}
static inline void pprz_send_msg_AIRSPEED(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_airspeed __attribute__((unused)), float *_airspeed_sp __attribute__((unused)), float *_airspeed_cnt __attribute__((unused)), float *_groundspeed_sp __attribute__((unused))) {}

#define DOWNLINK_SEND_XSENS(_trans, _dev, counter, p, q, r, phi, theta, psi, ax, ay, az, vx, vy, vz, lat, lon, alt, status, hour, min, sec, nanosec, year, month, day) {}
static inline void pprz_send_msg_XSENS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_counter __attribute__((unused)), float *_p __attribute__((unused)), float *_q __attribute__((unused)), float *_r __attribute__((unused)), float *_phi __attribute__((unused)), float *_theta __attribute__((unused)), float *_psi __attribute__((unused)), float *_ax __attribute__((unused)), float *_ay __attribute__((unused)), float *_az __attribute__((unused)), float *_vx __attribute__((unused)), float *_vy __attribute__((unused)), float *_vz __attribute__((unused)), float *_lat __attribute__((unused)), float *_lon __attribute__((unused)), float *_alt __attribute__((unused)), uint8_t *_status __attribute__((unused)), uint8_t *_hour __attribute__((unused)), uint8_t *_min __attribute__((unused)), uint8_t *_sec __attribute__((unused)), uint32_t *_nanosec __attribute__((unused)), uint16_t *_year __attribute__((unused)), uint8_t *_month __attribute__((unused)), uint8_t *_day __attribute__((unused))) {}

#define DOWNLINK_SEND_BARO_ETS(_trans, _dev, adc, offset, scaled) {}
static inline void pprz_send_msg_BARO_ETS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_adc __attribute__((unused)), uint16_t *_offset __attribute__((unused)), float *_scaled __attribute__((unused))) {}

#define DOWNLINK_SEND_AIRSPEED_ETS(_trans, _dev, adc, offset, scaled) {}
static inline void pprz_send_msg_AIRSPEED_ETS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_adc __attribute__((unused)), uint16_t *_offset __attribute__((unused)), float *_scaled __attribute__((unused))) {}

#define DOWNLINK_SEND_PBN(_trans, _dev, airspeed_adc, altitude_adc, airspeed, altitude, airspeed_offset, altitude_offset) {}
static inline void pprz_send_msg_PBN(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_airspeed_adc __attribute__((unused)), uint16_t *_altitude_adc __attribute__((unused)), float *_airspeed __attribute__((unused)), float *_altitude __attribute__((unused)), uint16_t *_airspeed_offset __attribute__((unused)), uint16_t *_altitude_offset __attribute__((unused))) {}

#define DOWNLINK_SEND_GPS_LLA(_trans, _dev, lat, lon, alt, hmsl, course, speed, climb, week, itow, mode, gps_nb_err) {}
static inline void pprz_send_msg_GPS_LLA(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_lat __attribute__((unused)), int32_t *_lon __attribute__((unused)), int32_t *_alt __attribute__((unused)), int32_t *_hmsl __attribute__((unused)), int16_t *_course __attribute__((unused)), uint16_t *_speed __attribute__((unused)), int16_t *_climb __attribute__((unused)), uint16_t *_week __attribute__((unused)), uint32_t *_itow __attribute__((unused)), uint8_t *_mode __attribute__((unused)), uint8_t *_gps_nb_err __attribute__((unused))) {}

#define DOWNLINK_SEND_H_CTL_A(_trans, _dev, roll_sum_err, roll_sp, roll_ref, phi, aileron_sp, pitch_sum_err, pitch_sp, pitch_ref, theta, elevator_sp) {}
static inline void pprz_send_msg_H_CTL_A(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_roll_sum_err __attribute__((unused)), float *_roll_sp __attribute__((unused)), float *_roll_ref __attribute__((unused)), float *_phi __attribute__((unused)), int16_t *_aileron_sp __attribute__((unused)), float *_pitch_sum_err __attribute__((unused)), float *_pitch_sp __attribute__((unused)), float *_pitch_ref __attribute__((unused)), float *_theta __attribute__((unused)), int16_t *_elevator_sp __attribute__((unused))) {}

#define DOWNLINK_SEND_TURB_PRESSURE_RAW(_trans, _dev, ch_0, ch_1, ch_2, ch_3, ch_4, ch_5, ch_6, ch_7, ch_8, ch_9, ch_10, ch_11, ch_12, ch_13, ch_14, ch_15) {}
static inline void pprz_send_msg_TURB_PRESSURE_RAW(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_ch_0 __attribute__((unused)), int32_t *_ch_1 __attribute__((unused)), int32_t *_ch_2 __attribute__((unused)), int32_t *_ch_3 __attribute__((unused)), int32_t *_ch_4 __attribute__((unused)), int32_t *_ch_5 __attribute__((unused)), int32_t *_ch_6 __attribute__((unused)), int32_t *_ch_7 __attribute__((unused)), int32_t *_ch_8 __attribute__((unused)), int32_t *_ch_9 __attribute__((unused)), int32_t *_ch_10 __attribute__((unused)), int32_t *_ch_11 __attribute__((unused)), int32_t *_ch_12 __attribute__((unused)), int32_t *_ch_13 __attribute__((unused)), int32_t *_ch_14 __attribute__((unused)), int32_t *_ch_15 __attribute__((unused))) {}

#define DOWNLINK_SEND_TURB_PRESSURE_VOLTAGE(_trans, _dev, ch_1_p, ch_1_t, ch_2_p, ch_2_t, ch_3_p, ch_3_t, ch_4_p, ch_4_t, ch_5_p, ch_5_t, ch_6_p, ch_6_t, ch_7_p, ch_7_t, gnd1, gnd2) {}
static inline void pprz_send_msg_TURB_PRESSURE_VOLTAGE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_ch_1_p __attribute__((unused)), float *_ch_1_t __attribute__((unused)), float *_ch_2_p __attribute__((unused)), float *_ch_2_t __attribute__((unused)), float *_ch_3_p __attribute__((unused)), float *_ch_3_t __attribute__((unused)), float *_ch_4_p __attribute__((unused)), float *_ch_4_t __attribute__((unused)), float *_ch_5_p __attribute__((unused)), float *_ch_5_t __attribute__((unused)), float *_ch_6_p __attribute__((unused)), float *_ch_6_t __attribute__((unused)), float *_ch_7_p __attribute__((unused)), float *_ch_7_t __attribute__((unused)), float *_gnd1 __attribute__((unused)), float *_gnd2 __attribute__((unused))) {}

#define DOWNLINK_SEND_CAM_POINT(_trans, _dev, cam_point_distance_from_home, cam_point_lat, cam_point_lon) {}
static inline void pprz_send_msg_CAM_POINT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_cam_point_distance_from_home __attribute__((unused)), float *_cam_point_lat __attribute__((unused)), float *_cam_point_lon __attribute__((unused))) {}

#define DOWNLINK_SEND_DC_INFO(_trans, _dev, mode, lat, lon, alt, course, photo_nr, dist, next_dist, start_x, start_y, start_angle, angle, last_block, count, shutter) {}
static inline void pprz_send_msg_DC_INFO(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_mode __attribute__((unused)), int32_t *_lat __attribute__((unused)), int32_t *_lon __attribute__((unused)), int32_t *_alt __attribute__((unused)), float *_course __attribute__((unused)), uint16_t *_photo_nr __attribute__((unused)), float *_dist __attribute__((unused)), float *_next_dist __attribute__((unused)), float *_start_x __attribute__((unused)), float *_start_y __attribute__((unused)), float *_start_angle __attribute__((unused)), float *_angle __attribute__((unused)), float *_last_block __attribute__((unused)), uint16_t *_count __attribute__((unused)), uint8_t *_shutter __attribute__((unused))) {}

#define DOWNLINK_SEND_AMSYS_BARO(_trans, _dev, pBaroRaw, pBaro, pHomePressure, AltOffset, aktuell, Over_Ground, tempBaro) {}
static inline void pprz_send_msg_AMSYS_BARO(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_pBaroRaw __attribute__((unused)), float *_pBaro __attribute__((unused)), float *_pHomePressure __attribute__((unused)), float *_AltOffset __attribute__((unused)), float *_aktuell __attribute__((unused)), float *_Over_Ground __attribute__((unused)), float *_tempBaro __attribute__((unused))) {}

#define DOWNLINK_SEND_AMSYS_AIRSPEED(_trans, _dev, asRaw, asPresure, asAirspeed, asAirsFilt, asTemp) {}
static inline void pprz_send_msg_AMSYS_AIRSPEED(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_asRaw __attribute__((unused)), float *_asPresure __attribute__((unused)), float *_asAirspeed __attribute__((unused)), float *_asAirsFilt __attribute__((unused)), float *_asTemp __attribute__((unused))) {}

#define DOWNLINK_SEND_FLIGHT_BENCHMARK(_trans, _dev, SE_As, SE_Alt, SE_Pos, Err_As, Err_Alt, Err_Pos) {}
static inline void pprz_send_msg_FLIGHT_BENCHMARK(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_SE_As __attribute__((unused)), float *_SE_Alt __attribute__((unused)), float *_SE_Pos __attribute__((unused)), float *_Err_As __attribute__((unused)), float *_Err_Alt __attribute__((unused)), float *_Err_Pos __attribute__((unused))) {}

#define DOWNLINK_SEND_MPL3115_BARO(_trans, _dev, pressure, temp, alt) {}
static inline void pprz_send_msg_MPL3115_BARO(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_pressure __attribute__((unused)), int16_t *_temp __attribute__((unused)), float *_alt __attribute__((unused))) {}

#define DOWNLINK_SEND_AOA(_trans, _dev, raw, angle) {}
static inline void pprz_send_msg_AOA(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_raw __attribute__((unused)), float *_angle __attribute__((unused))) {}

#define DOWNLINK_SEND_XTEND_RSSI(_trans, _dev, datalink_time, rssi_fade_margin, duty) {}
static inline void pprz_send_msg_XTEND_RSSI(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_datalink_time __attribute__((unused)), uint8_t *_rssi_fade_margin __attribute__((unused)), uint8_t *_duty __attribute__((unused))) {}

#define DOWNLINK_SEND_SUPERBITRF(_trans, _dev, status, cyrf_status, irq_count, rx_packet_count, tx_packet_count, transfer_timeouts, resync_count, uplink_count, rc_count, timing1, timing2, bind_mfg_id, nb_mfg_id, mfg_id) {}
static inline void pprz_send_msg_SUPERBITRF(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_status __attribute__((unused)), uint8_t *_cyrf_status __attribute__((unused)), uint32_t *_irq_count __attribute__((unused)), uint32_t *_rx_packet_count __attribute__((unused)), uint32_t *_tx_packet_count __attribute__((unused)), uint32_t *_transfer_timeouts __attribute__((unused)), uint32_t *_resync_count __attribute__((unused)), uint32_t *_uplink_count __attribute__((unused)), uint32_t *_rc_count __attribute__((unused)), uint32_t *_timing1 __attribute__((unused)), uint32_t *_timing2 __attribute__((unused)), uint32_t *_bind_mfg_id __attribute__((unused)), uint8_t nb_mfg_id __attribute__((unused)), uint8_t *_mfg_id __attribute__((unused))) {}

#define DOWNLINK_SEND_GX3_INFO(_trans, _dev, GX3_freq, chksm_error, hdr_error, GX3_chksm) {}
static inline void pprz_send_msg_GX3_INFO(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_GX3_freq __attribute__((unused)), uint32_t *_chksm_error __attribute__((unused)), uint32_t *_hdr_error __attribute__((unused)), uint16_t *_GX3_chksm __attribute__((unused))) {}

#define DOWNLINK_SEND_EXPLAIN(_trans, _dev, type, id, nb_string, string) {}
static inline void pprz_send_msg_EXPLAIN(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_type __attribute__((unused)), uint8_t *_id __attribute__((unused)), uint8_t nb_string __attribute__((unused)), uint8_t *_string __attribute__((unused))) {}

#define DOWNLINK_SEND_VIDEO_TELEMETRY(_trans, _dev, blob_x1, blob_y1, blob_x2, blob_y2, blob_x3, blob_y3, blob_x4, blob_y4) {}
static inline void pprz_send_msg_VIDEO_TELEMETRY(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_blob_x1 __attribute__((unused)), int32_t *_blob_y1 __attribute__((unused)), int32_t *_blob_x2 __attribute__((unused)), int32_t *_blob_y2 __attribute__((unused)), int32_t *_blob_x3 __attribute__((unused)), int32_t *_blob_y3 __attribute__((unused)), int32_t *_blob_x4 __attribute__((unused)), int32_t *_blob_y4 __attribute__((unused))) {}

#define DOWNLINK_SEND_VF_UPDATE(_trans, _dev, baro, range_meter) {}
static inline void pprz_send_msg_VF_UPDATE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_baro __attribute__((unused)), float *_range_meter __attribute__((unused))) {}

#define DOWNLINK_SEND_VF_PREDICT(_trans, _dev, accel) {}
static inline void pprz_send_msg_VF_PREDICT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_accel __attribute__((unused))) {}

#define DOWNLINK_SEND_INV_FILTER(_trans, _dev, quat, phi_inv, theta_inv, psi_inv, Vx_inv, Vy_inv, Vz_inv, Px_inv, Py_inv, Pz_inv, bias_phi, bias_theta, bias_psi, bias_as, bias_hb, meas_baro, meas_gps) {}
static inline void pprz_send_msg_INV_FILTER(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_quat __attribute__((unused)), float *_phi_inv __attribute__((unused)), float *_theta_inv __attribute__((unused)), float *_psi_inv __attribute__((unused)), float *_Vx_inv __attribute__((unused)), float *_Vy_inv __attribute__((unused)), float *_Vz_inv __attribute__((unused)), float *_Px_inv __attribute__((unused)), float *_Py_inv __attribute__((unused)), float *_Pz_inv __attribute__((unused)), float *_bias_phi __attribute__((unused)), float *_bias_theta __attribute__((unused)), float *_bias_psi __attribute__((unused)), float *_bias_as __attribute__((unused)), float *_bias_hb __attribute__((unused)), float *_meas_baro __attribute__((unused)), float *_meas_gps __attribute__((unused))) {}

#define DOWNLINK_SEND_MISSION_STATUS(_trans, _dev, remaining_time, nb_task_list, task_list) {}
static inline void pprz_send_msg_MISSION_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_remaining_time __attribute__((unused)), uint8_t nb_task_list __attribute__((unused)), uint8_t *_task_list __attribute__((unused))) {}

#define DOWNLINK_SEND_CROSS_TRACK_ERROR(_trans, _dev, cross_track_error, cte_int) {}
static inline void pprz_send_msg_CROSS_TRACK_ERROR(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_cross_track_error __attribute__((unused)), float *_cte_int __attribute__((unused))) {}

#define DOWNLINK_SEND_GENERIC_COM(_trans, _dev, lat, lon, alt, gspeed, course, airspeed, vsupply, energy, throttle, ap_mode, nav_block, flight_time) {}
static inline void pprz_send_msg_GENERIC_COM(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_lat __attribute__((unused)), int32_t *_lon __attribute__((unused)), int16_t *_alt __attribute__((unused)), uint16_t *_gspeed __attribute__((unused)), int16_t *_course __attribute__((unused)), uint16_t *_airspeed __attribute__((unused)), uint8_t *_vsupply __attribute__((unused)), uint8_t *_energy __attribute__((unused)), uint8_t *_throttle __attribute__((unused)), uint8_t *_ap_mode __attribute__((unused)), uint8_t *_nav_block __attribute__((unused)), uint16_t *_flight_time __attribute__((unused))) {}

#define DOWNLINK_SEND_FORMATION_SLOT_TM(_trans, _dev, ac_id, mode, slot_east, slot_north, slot_alt) {}
static inline void pprz_send_msg_FORMATION_SLOT_TM(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_mode __attribute__((unused)), float *_slot_east __attribute__((unused)), float *_slot_north __attribute__((unused)), float *_slot_alt __attribute__((unused))) {}

#define DOWNLINK_SEND_FORMATION_STATUS_TM(_trans, _dev, ac_id, leader_id, status) {}
static inline void pprz_send_msg_FORMATION_STATUS_TM(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_leader_id __attribute__((unused)), uint8_t *_status __attribute__((unused))) {}

#define DOWNLINK_SEND_BMP_STATUS(_trans, _dev, UP, UT, press, temp) {}
static inline void pprz_send_msg_BMP_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_UP __attribute__((unused)), int32_t *_UT __attribute__((unused)), int32_t *_press __attribute__((unused)), int32_t *_temp __attribute__((unused))) {}

#define DOWNLINK_SEND_MLX_STATUS(_trans, _dev, itemp_case, temp_case, itemp_obj, temp_obj) {}
static inline void pprz_send_msg_MLX_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_itemp_case __attribute__((unused)), float *_temp_case __attribute__((unused)), uint16_t *_itemp_obj __attribute__((unused)), float *_temp_obj __attribute__((unused))) {}

#define DOWNLINK_SEND_TMP_STATUS(_trans, _dev, itemp, temp) {}
static inline void pprz_send_msg_TMP_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_itemp __attribute__((unused)), float *_temp __attribute__((unused))) {}

#define DOWNLINK_SEND_WIND_INFO_RET(_trans, _dev, flags, east, north, up, airspeed) {}
static inline void pprz_send_msg_WIND_INFO_RET(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_flags __attribute__((unused)), float *_east __attribute__((unused)), float *_north __attribute__((unused)), float *_up __attribute__((unused)), float *_airspeed __attribute__((unused))) {}

#define DOWNLINK_SEND_SCP_STATUS(_trans, _dev, press, temp) {}
static inline void pprz_send_msg_SCP_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_press __attribute__((unused)), int16_t *_temp __attribute__((unused))) {}

#define DOWNLINK_SEND_SHT_STATUS(_trans, _dev, ihumid, itemp, humid, temp) {}
static inline void pprz_send_msg_SHT_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_ihumid __attribute__((unused)), uint16_t *_itemp __attribute__((unused)), float *_humid __attribute__((unused)), float *_temp __attribute__((unused))) {}

#define DOWNLINK_SEND_ENOSE_STATUS(_trans, _dev, val1, val2, val3, PID, nb_heat, heat) {}
static inline void pprz_send_msg_ENOSE_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_val1 __attribute__((unused)), uint16_t *_val2 __attribute__((unused)), uint16_t *_val3 __attribute__((unused)), uint16_t *_PID __attribute__((unused)), uint8_t nb_heat __attribute__((unused)), uint8_t *_heat __attribute__((unused))) {}

#define DOWNLINK_SEND_DPICCO_STATUS(_trans, _dev, humid, temp, fhumid, ftemp) {}
static inline void pprz_send_msg_DPICCO_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_humid __attribute__((unused)), uint16_t *_temp __attribute__((unused)), float *_fhumid __attribute__((unused)), float *_ftemp __attribute__((unused))) {}

#define DOWNLINK_SEND_ANTENNA_DEBUG(_trans, _dev, mag_xraw, mag_yraw, mag_xcal, mag_ycal, mag_heading, mag_magnitude, mag_temp, mag_distor, mag_cal_status) {}
static inline void pprz_send_msg_ANTENNA_DEBUG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_mag_xraw __attribute__((unused)), int32_t *_mag_yraw __attribute__((unused)), float *_mag_xcal __attribute__((unused)), float *_mag_ycal __attribute__((unused)), float *_mag_heading __attribute__((unused)), float *_mag_magnitude __attribute__((unused)), float *_mag_temp __attribute__((unused)), uint8_t *_mag_distor __attribute__((unused)), uint8_t *_mag_cal_status __attribute__((unused))) {}

#define DOWNLINK_SEND_ANTENNA_STATUS(_trans, _dev, azim_sp, elev_sp, id_sp, mode) {}
static inline void pprz_send_msg_ANTENNA_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_azim_sp __attribute__((unused)), float *_elev_sp __attribute__((unused)), uint8_t *_id_sp __attribute__((unused)), uint8_t *_mode __attribute__((unused))) {}

#define DOWNLINK_SEND_MOTOR_BENCH_STATUS(_trans, _dev, time_ticks, throttle, rpm, current, thrust, torque, time_s, mode) {}
static inline void pprz_send_msg_MOTOR_BENCH_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_time_ticks __attribute__((unused)), float *_throttle __attribute__((unused)), float *_rpm __attribute__((unused)), float *_current __attribute__((unused)), float *_thrust __attribute__((unused)), float *_torque __attribute__((unused)), uint16_t *_time_s __attribute__((unused)), uint8_t *_mode __attribute__((unused))) {}

#define DOWNLINK_SEND_MOTOR_BENCH_STATIC(_trans, _dev, av_rpm, av_thrust, av_current, throttle) {}
static inline void pprz_send_msg_MOTOR_BENCH_STATIC(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_av_rpm __attribute__((unused)), float *_av_thrust __attribute__((unused)), float *_av_current __attribute__((unused)), uint16_t *_throttle __attribute__((unused))) {}

#define DOWNLINK_SEND_HIH_STATUS(_trans, _dev, humid, fhumid, ftemp) {}
static inline void pprz_send_msg_HIH_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_humid __attribute__((unused)), float *_fhumid __attribute__((unused)), float *_ftemp __attribute__((unused))) {}

#define DOWNLINK_SEND_TEMT_STATUS(_trans, _dev, light, f_light) {}
static inline void pprz_send_msg_TEMT_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_light __attribute__((unused)), float *_f_light __attribute__((unused))) {}

#define DOWNLINK_SEND_GP2Y_STATUS(_trans, _dev, idensity, density) {}
static inline void pprz_send_msg_GP2Y_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_idensity __attribute__((unused)), float *_density __attribute__((unused))) {}

#define DOWNLINK_SEND_SHT_I2C_SERIAL(_trans, _dev, serial0, serial1) {}
static inline void pprz_send_msg_SHT_I2C_SERIAL(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_serial0 __attribute__((unused)), uint32_t *_serial1 __attribute__((unused))) {}

#define DOWNLINK_SEND_PPM(_trans, _dev, ppm_rate, nb_values, values) {}
static inline void pprz_send_msg_PPM(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ppm_rate __attribute__((unused)), uint8_t nb_values __attribute__((unused)), uint16_t *_values __attribute__((unused))) {}

#define DOWNLINK_SEND_RC(_trans, _dev, nb_values, values) {}
static inline void pprz_send_msg_RC(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_values __attribute__((unused)), int16_t *_values __attribute__((unused))) {}

#define DOWNLINK_SEND_COMMANDS(_trans, _dev, nb_values, values) {}
static inline void pprz_send_msg_COMMANDS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_values __attribute__((unused)), int16_t *_values __attribute__((unused))) {}

#define DOWNLINK_SEND_FBW_STATUS(_trans, _dev, rc_status, frame_rate, mode, vsupply, current) {}
static inline void pprz_send_msg_FBW_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_rc_status __attribute__((unused)), uint8_t *_frame_rate __attribute__((unused)), uint8_t *_mode __attribute__((unused)), uint16_t *_vsupply __attribute__((unused)), int32_t *_current __attribute__((unused))) {}

#define DOWNLINK_SEND_ADC(_trans, _dev, mcu, nb_values, values) {}
static inline void pprz_send_msg_ADC(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_mcu __attribute__((unused)), uint8_t nb_values __attribute__((unused)), uint16_t *_values __attribute__((unused))) {}

#define DOWNLINK_SEND_ACTUATORS(_trans, _dev, nb_values, values) {}
static inline void pprz_send_msg_ACTUATORS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_values __attribute__((unused)), int16_t *_values __attribute__((unused))) {}

#define DOWNLINK_SEND_BLUEGIGA(_trans, _dev, data_rate, A2A_msg_rate) {}
static inline void pprz_send_msg_BLUEGIGA(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_data_rate __attribute__((unused)), uint32_t *_A2A_msg_rate __attribute__((unused))) {}

#define DOWNLINK_SEND_PIKSI_HEARTBEAT(_trans, _dev, heartbeat) {}
static inline void pprz_send_msg_PIKSI_HEARTBEAT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_heartbeat __attribute__((unused))) {}

#define DOWNLINK_SEND_MULTIGAZE_METERS(_trans, _dev, nb_multigaze_meters, multigaze_meters) {}
static inline void pprz_send_msg_MULTIGAZE_METERS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_multigaze_meters __attribute__((unused)), float *_multigaze_meters __attribute__((unused))) {}

#define DOWNLINK_SEND_DC_SHOT(_trans, _dev, photo_nr, lat, lon, alt, hmsl, phi, theta, psi, course, speed, itow) {}
static inline void pprz_send_msg_DC_SHOT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_photo_nr __attribute__((unused)), int32_t *_lat __attribute__((unused)), int32_t *_lon __attribute__((unused)), int32_t *_alt __attribute__((unused)), int32_t *_hmsl __attribute__((unused)), int16_t *_phi __attribute__((unused)), int16_t *_theta __attribute__((unused)), int16_t *_psi __attribute__((unused)), int16_t *_course __attribute__((unused)), uint16_t *_speed __attribute__((unused)), uint32_t *_itow __attribute__((unused))) {}

#define DOWNLINK_SEND_TEST_BOARD_RESULTS(_trans, _dev, uart, ppm, nb_servo, servo) {}
static inline void pprz_send_msg_TEST_BOARD_RESULTS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_uart __attribute__((unused)), uint8_t *_ppm __attribute__((unused)), uint8_t nb_servo __attribute__((unused)), uint16_t *_servo __attribute__((unused))) {}

#define DOWNLINK_SEND_MLX_SERIAL(_trans, _dev, serial0, serial1) {}
static inline void pprz_send_msg_MLX_SERIAL(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_serial0 __attribute__((unused)), uint32_t *_serial1 __attribute__((unused))) {}

#define DOWNLINK_SEND_PAYLOAD(_trans, _dev, nb_values, values) {}
static inline void pprz_send_msg_PAYLOAD(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_values __attribute__((unused)), uint8_t *_values __attribute__((unused))) {}

#define DOWNLINK_SEND_HTM_STATUS(_trans, _dev, ihumid, itemp, humid, temp) {}
static inline void pprz_send_msg_HTM_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_ihumid __attribute__((unused)), uint16_t *_itemp __attribute__((unused)), float *_humid __attribute__((unused)), float *_temp __attribute__((unused))) {}

#define DOWNLINK_SEND_BARO_MS5611(_trans, _dev, d1, d2, pressure, temp) {}
static inline void pprz_send_msg_BARO_MS5611(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_d1 __attribute__((unused)), uint32_t *_d2 __attribute__((unused)), float *_pressure __attribute__((unused)), float *_temp __attribute__((unused))) {}

#define DOWNLINK_SEND_MS5611_COEFF(_trans, _dev, c0, c1, c2, c3, c4, c5, c6, c7) {}
static inline void pprz_send_msg_MS5611_COEFF(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_c0 __attribute__((unused)), uint16_t *_c1 __attribute__((unused)), uint16_t *_c2 __attribute__((unused)), uint16_t *_c3 __attribute__((unused)), uint16_t *_c4 __attribute__((unused)), uint16_t *_c5 __attribute__((unused)), uint16_t *_c6 __attribute__((unused)), uint16_t *_c7 __attribute__((unused))) {}

#define DOWNLINK_SEND_ATMOSPHERE_CHARGE(_trans, _dev, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9) {}
static inline void pprz_send_msg_ATMOSPHERE_CHARGE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_t0 __attribute__((unused)), uint16_t *_t1 __attribute__((unused)), uint16_t *_t2 __attribute__((unused)), uint16_t *_t3 __attribute__((unused)), uint16_t *_t4 __attribute__((unused)), uint16_t *_t5 __attribute__((unused)), uint16_t *_t6 __attribute__((unused)), uint16_t *_t7 __attribute__((unused)), uint16_t *_t8 __attribute__((unused)), uint16_t *_t9 __attribute__((unused))) {}

#define DOWNLINK_SEND_SOLAR_RADIATION(_trans, _dev, up_t0, dn_t0, up_t1, dn_t1, up_t2, dn_t2, up_t3, dn_t3, up_t4, dn_t4, up_t5, dn_t5, up_t6, dn_t6, up_t7, dn_t7, up_t8, dn_t8, up_t9, dn_t9) {}
static inline void pprz_send_msg_SOLAR_RADIATION(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_up_t0 __attribute__((unused)), uint16_t *_dn_t0 __attribute__((unused)), uint16_t *_up_t1 __attribute__((unused)), uint16_t *_dn_t1 __attribute__((unused)), uint16_t *_up_t2 __attribute__((unused)), uint16_t *_dn_t2 __attribute__((unused)), uint16_t *_up_t3 __attribute__((unused)), uint16_t *_dn_t3 __attribute__((unused)), uint16_t *_up_t4 __attribute__((unused)), uint16_t *_dn_t4 __attribute__((unused)), uint16_t *_up_t5 __attribute__((unused)), uint16_t *_dn_t5 __attribute__((unused)), uint16_t *_up_t6 __attribute__((unused)), uint16_t *_dn_t6 __attribute__((unused)), uint16_t *_up_t7 __attribute__((unused)), uint16_t *_dn_t7 __attribute__((unused)), uint16_t *_up_t8 __attribute__((unused)), uint16_t *_dn_t8 __attribute__((unused)), uint16_t *_up_t9 __attribute__((unused)), uint16_t *_dn_t9 __attribute__((unused))) {}

#define DOWNLINK_SEND_TCAS_TA(_trans, _dev, ac_id) {}
static inline void pprz_send_msg_TCAS_TA(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused))) {}

#define DOWNLINK_SEND_TCAS_RA(_trans, _dev, ac_id, resolve) {}
static inline void pprz_send_msg_TCAS_RA(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), uint8_t *_resolve __attribute__((unused))) {}

#define DOWNLINK_SEND_TCAS_RESOLVED(_trans, _dev, ac_id) {}
static inline void pprz_send_msg_TCAS_RESOLVED(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused))) {}

#define DOWNLINK_SEND_TCAS_DEBUG(_trans, _dev, ac_id, tau) {}
static inline void pprz_send_msg_TCAS_DEBUG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_ac_id __attribute__((unused)), float *_tau __attribute__((unused))) {}

#define DOWNLINK_SEND_POTENTIAL(_trans, _dev, east, north, alt, speed, climb) {}
static inline void pprz_send_msg_POTENTIAL(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_east __attribute__((unused)), float *_north __attribute__((unused)), float *_alt __attribute__((unused)), float *_speed __attribute__((unused)), float *_climb __attribute__((unused))) {}

#define DOWNLINK_SEND_VERTICAL_ENERGY(_trans, _dev, Epot_err, Ekin_err, Etot_err, Edis_err, throttle, nav_pitch, speed_sp) {}
static inline void pprz_send_msg_VERTICAL_ENERGY(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_Epot_err __attribute__((unused)), float *_Ekin_err __attribute__((unused)), float *_Etot_err __attribute__((unused)), float *_Edis_err __attribute__((unused)), float *_throttle __attribute__((unused)), float *_nav_pitch __attribute__((unused)), float *_speed_sp __attribute__((unused))) {}

#define DOWNLINK_SEND_TEMP_TCOUPLE(_trans, _dev, fval0, fval1, fval2, fval3, fref0, fref1, fref2, fref3, val0, val1, val2, val3, ref0, ref1, ref2, ref3) {}
static inline void pprz_send_msg_TEMP_TCOUPLE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_fval0 __attribute__((unused)), float *_fval1 __attribute__((unused)), float *_fval2 __attribute__((unused)), float *_fval3 __attribute__((unused)), float *_fref0 __attribute__((unused)), float *_fref1 __attribute__((unused)), float *_fref2 __attribute__((unused)), float *_fref3 __attribute__((unused)), uint16_t *_val0 __attribute__((unused)), uint16_t *_val1 __attribute__((unused)), uint16_t *_val2 __attribute__((unused)), uint16_t *_val3 __attribute__((unused)), uint16_t *_ref0 __attribute__((unused)), uint16_t *_ref1 __attribute__((unused)), uint16_t *_ref2 __attribute__((unused)), uint16_t *_ref3 __attribute__((unused))) {}

#define DOWNLINK_SEND_SHT_I2C_STATUS(_trans, _dev, ihumid, itemp, humid, temp) {}
static inline void pprz_send_msg_SHT_I2C_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_ihumid __attribute__((unused)), uint16_t *_itemp __attribute__((unused)), float *_humid __attribute__((unused)), float *_temp __attribute__((unused))) {}

#define DOWNLINK_SEND_CAMERA_SNAPSHOT(_trans, _dev, snapshot_image_number) {}
static inline void pprz_send_msg_CAMERA_SNAPSHOT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_snapshot_image_number __attribute__((unused))) {}

#define DOWNLINK_SEND_TIMESTAMP(_trans, _dev, timestamp) {}
static inline void pprz_send_msg_TIMESTAMP(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_timestamp __attribute__((unused))) {}

#define DOWNLINK_SEND_STAB_ATTITUDE_FLOAT(_trans, _dev, est_p, est_q, est_r, est_phi, est_theta, est_psi, ref_phi, ref_theta, ref_psi, sum_err_phi, sum_err_theta, sum_err_psi, delta_a_fb, delta_e_fb, delta_r_fb, delta_a_ff, delta_e_ff, delta_r_ff, delta_a, delta_e, delta_r, est_p_d, est_q_d, est_r_d) {}
static inline void pprz_send_msg_STAB_ATTITUDE_FLOAT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_est_p __attribute__((unused)), float *_est_q __attribute__((unused)), float *_est_r __attribute__((unused)), float *_est_phi __attribute__((unused)), float *_est_theta __attribute__((unused)), float *_est_psi __attribute__((unused)), float *_ref_phi __attribute__((unused)), float *_ref_theta __attribute__((unused)), float *_ref_psi __attribute__((unused)), float *_sum_err_phi __attribute__((unused)), float *_sum_err_theta __attribute__((unused)), float *_sum_err_psi __attribute__((unused)), float *_delta_a_fb __attribute__((unused)), float *_delta_e_fb __attribute__((unused)), float *_delta_r_fb __attribute__((unused)), float *_delta_a_ff __attribute__((unused)), float *_delta_e_ff __attribute__((unused)), float *_delta_r_ff __attribute__((unused)), int32_t *_delta_a __attribute__((unused)), int32_t *_delta_e __attribute__((unused)), int32_t *_delta_r __attribute__((unused)), float *_est_p_d __attribute__((unused)), float *_est_q_d __attribute__((unused)), float *_est_r_d __attribute__((unused))) {}

#define DOWNLINK_SEND_IMU_GYRO_SCALED(_trans, _dev, gp, gq, gr) {}
static inline void pprz_send_msg_IMU_GYRO_SCALED(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_gp __attribute__((unused)), int32_t *_gq __attribute__((unused)), int32_t *_gr __attribute__((unused))) {}

#define DOWNLINK_SEND_IMU_ACCEL_SCALED(_trans, _dev, ax, ay, az) {}
static inline void pprz_send_msg_IMU_ACCEL_SCALED(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_ax __attribute__((unused)), int32_t *_ay __attribute__((unused)), int32_t *_az __attribute__((unused))) {}

#define DOWNLINK_SEND_IMU_MAG_SCALED(_trans, _dev, mx, my, mz) {}
static inline void pprz_send_msg_IMU_MAG_SCALED(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_mx __attribute__((unused)), int32_t *_my __attribute__((unused)), int32_t *_mz __attribute__((unused))) {}

#define DOWNLINK_SEND_FILTER(_trans, _dev, phi, theta, psi, measure_phi, measure_theta, measure_psi, corrected_phi, corrected_theta, corrected_psi, correction_phi, correction_theta, correction_psi, bp, bq, br, comp_id) {}
static inline void pprz_send_msg_FILTER(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_phi __attribute__((unused)), int32_t *_theta __attribute__((unused)), int32_t *_psi __attribute__((unused)), int32_t *_measure_phi __attribute__((unused)), int32_t *_measure_theta __attribute__((unused)), int32_t *_measure_psi __attribute__((unused)), int32_t *_corrected_phi __attribute__((unused)), int32_t *_corrected_theta __attribute__((unused)), int32_t *_corrected_psi __attribute__((unused)), int32_t *_correction_phi __attribute__((unused)), int32_t *_correction_theta __attribute__((unused)), int32_t *_correction_psi __attribute__((unused)), int32_t *_bp __attribute__((unused)), int32_t *_bq __attribute__((unused)), int32_t *_br __attribute__((unused)), uint8_t *_comp_id __attribute__((unused))) {}

#define DOWNLINK_SEND_FILTER2(_trans, _dev, px, py, pz, gsx, gsy, gsz) {}
static inline void pprz_send_msg_FILTER2(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_px __attribute__((unused)), int32_t *_py __attribute__((unused)), int32_t *_pz __attribute__((unused)), int32_t *_gsx __attribute__((unused)), int32_t *_gsy __attribute__((unused)), int32_t *_gsz __attribute__((unused))) {}

#define DOWNLINK_SEND_RATE_LOOP(_trans, _dev, sp_p, sp_q, sp_r, sumerr_p, sumerr_q, sumerr_r, fb_p, fb_q, fb_r, delta_t) {}
static inline void pprz_send_msg_RATE_LOOP(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_sp_p __attribute__((unused)), float *_sp_q __attribute__((unused)), float *_sp_r __attribute__((unused)), float *_sumerr_p __attribute__((unused)), float *_sumerr_q __attribute__((unused)), float *_sumerr_r __attribute__((unused)), float *_fb_p __attribute__((unused)), float *_fb_q __attribute__((unused)), float *_fb_r __attribute__((unused)), int32_t *_delta_t __attribute__((unused))) {}

#define DOWNLINK_SEND_FILTER_ALIGNER(_trans, _dev, lp_gp, lp_gq, lp_gr, gp, gq, gr, noise, cnt, status) {}
static inline void pprz_send_msg_FILTER_ALIGNER(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_lp_gp __attribute__((unused)), int32_t *_lp_gq __attribute__((unused)), int32_t *_lp_gr __attribute__((unused)), int32_t *_gp __attribute__((unused)), int32_t *_gq __attribute__((unused)), int32_t *_gr __attribute__((unused)), int32_t *_noise __attribute__((unused)), int32_t *_cnt __attribute__((unused)), uint8_t *_status __attribute__((unused))) {}

#define DOWNLINK_SEND_AIRSPEED_MS45XX(_trans, _dev, diffPress, temperature, airspeed) {}
static inline void pprz_send_msg_AIRSPEED_MS45XX(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_diffPress __attribute__((unused)), int16_t *_temperature __attribute__((unused)), float *_airspeed __attribute__((unused))) {}

#define DOWNLINK_SEND_FILTER_COR(_trans, _dev, mphi, mtheta, mpsi, qi, qx, qy, qz) {}
static inline void pprz_send_msg_FILTER_COR(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_mphi __attribute__((unused)), int32_t *_mtheta __attribute__((unused)), int32_t *_mpsi __attribute__((unused)), int32_t *_qi __attribute__((unused)), int32_t *_qx __attribute__((unused)), int32_t *_qy __attribute__((unused)), int32_t *_qz __attribute__((unused))) {}

#define DOWNLINK_SEND_STAB_ATTITUDE_INT(_trans, _dev, est_p, est_q, est_r, est_phi, est_theta, est_psi, sp_phi, sp_theta, sp_psi, sum_err_phi, sum_err_theta, sum_err_psi, delta_a_fb, delta_e_fb, delta_r_fb, delta_a_ff, delta_e_ff, delta_r_ff, delta_a, delta_e, delta_r) {}
static inline void pprz_send_msg_STAB_ATTITUDE_INT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_est_p __attribute__((unused)), int32_t *_est_q __attribute__((unused)), int32_t *_est_r __attribute__((unused)), int32_t *_est_phi __attribute__((unused)), int32_t *_est_theta __attribute__((unused)), int32_t *_est_psi __attribute__((unused)), int32_t *_sp_phi __attribute__((unused)), int32_t *_sp_theta __attribute__((unused)), int32_t *_sp_psi __attribute__((unused)), int32_t *_sum_err_phi __attribute__((unused)), int32_t *_sum_err_theta __attribute__((unused)), int32_t *_sum_err_psi __attribute__((unused)), int32_t *_delta_a_fb __attribute__((unused)), int32_t *_delta_e_fb __attribute__((unused)), int32_t *_delta_r_fb __attribute__((unused)), int32_t *_delta_a_ff __attribute__((unused)), int32_t *_delta_e_ff __attribute__((unused)), int32_t *_delta_r_ff __attribute__((unused)), int32_t *_delta_a __attribute__((unused)), int32_t *_delta_e __attribute__((unused)), int32_t *_delta_r __attribute__((unused))) {}

#define DOWNLINK_SEND_STAB_ATTITUDE_REF_INT(_trans, _dev, sp_phi, sp_theta, sp_psi, ref_phi, ref_theta, ref_psi, ref_p, ref_q, ref_r, ref_pd, ref_qd, ref_rd) {}
static inline void pprz_send_msg_STAB_ATTITUDE_REF_INT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_sp_phi __attribute__((unused)), int32_t *_sp_theta __attribute__((unused)), int32_t *_sp_psi __attribute__((unused)), int32_t *_ref_phi __attribute__((unused)), int32_t *_ref_theta __attribute__((unused)), int32_t *_ref_psi __attribute__((unused)), int32_t *_ref_p __attribute__((unused)), int32_t *_ref_q __attribute__((unused)), int32_t *_ref_r __attribute__((unused)), int32_t *_ref_pd __attribute__((unused)), int32_t *_ref_qd __attribute__((unused)), int32_t *_ref_rd __attribute__((unused))) {}

#define DOWNLINK_SEND_STAB_ATTITUDE_REF_FLOAT(_trans, _dev, sp_phi, sp_theta, sp_psi, ref_phi, ref_theta, ref_psi, ref_p, ref_q, ref_r, ref_pd, ref_qd, ref_rd) {}
static inline void pprz_send_msg_STAB_ATTITUDE_REF_FLOAT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_sp_phi __attribute__((unused)), float *_sp_theta __attribute__((unused)), float *_sp_psi __attribute__((unused)), float *_ref_phi __attribute__((unused)), float *_ref_theta __attribute__((unused)), float *_ref_psi __attribute__((unused)), float *_ref_p __attribute__((unused)), float *_ref_q __attribute__((unused)), float *_ref_r __attribute__((unused)), float *_ref_pd __attribute__((unused)), float *_ref_qd __attribute__((unused)), float *_ref_rd __attribute__((unused))) {}

#define DOWNLINK_SEND_ROTORCRAFT_CMD(_trans, _dev, cmd_roll, cmd_pitch, cmd_yaw, cmd_thrust) {}
static inline void pprz_send_msg_ROTORCRAFT_CMD(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_cmd_roll __attribute__((unused)), int32_t *_cmd_pitch __attribute__((unused)), int32_t *_cmd_yaw __attribute__((unused)), int32_t *_cmd_thrust __attribute__((unused))) {}

#define DOWNLINK_SEND_GUIDANCE_H_INT(_trans, _dev, sp_x, sp_y, ref_x, ref_y, est_x, est_y) {}
static inline void pprz_send_msg_GUIDANCE_H_INT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_sp_x __attribute__((unused)), int32_t *_sp_y __attribute__((unused)), int32_t *_ref_x __attribute__((unused)), int32_t *_ref_y __attribute__((unused)), int32_t *_est_x __attribute__((unused)), int32_t *_est_y __attribute__((unused))) {}

#define DOWNLINK_SEND_VERT_LOOP(_trans, _dev, z_sp, zd_sp, est_z, est_zd, est_zdd, ref_z, ref_zd, ref_zdd, adp_inv_m, adp_cov, adp_meas, sum_err, ff_cmd, fb_cmd, delta_t) {}
static inline void pprz_send_msg_VERT_LOOP(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_z_sp __attribute__((unused)), int32_t *_zd_sp __attribute__((unused)), int32_t *_est_z __attribute__((unused)), int32_t *_est_zd __attribute__((unused)), int32_t *_est_zdd __attribute__((unused)), int32_t *_ref_z __attribute__((unused)), int32_t *_ref_zd __attribute__((unused)), int32_t *_ref_zdd __attribute__((unused)), int32_t *_adp_inv_m __attribute__((unused)), int32_t *_adp_cov __attribute__((unused)), int32_t *_adp_meas __attribute__((unused)), int32_t *_sum_err __attribute__((unused)), int32_t *_ff_cmd __attribute__((unused)), int32_t *_fb_cmd __attribute__((unused)), int32_t *_delta_t __attribute__((unused))) {}

#define DOWNLINK_SEND_HOVER_LOOP(_trans, _dev, sp_x, sp_y, est_x, est_y, est_xd, est_yd, est_xdd, est_ydd, err_x, err_y, err_xd, err_yd, err_sum_x, err_sum_y, cmd_x, cmd_y, cmd_heading) {}
static inline void pprz_send_msg_HOVER_LOOP(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_sp_x __attribute__((unused)), int32_t *_sp_y __attribute__((unused)), int32_t *_est_x __attribute__((unused)), int32_t *_est_y __attribute__((unused)), int32_t *_est_xd __attribute__((unused)), int32_t *_est_yd __attribute__((unused)), int32_t *_est_xdd __attribute__((unused)), int32_t *_est_ydd __attribute__((unused)), int32_t *_err_x __attribute__((unused)), int32_t *_err_y __attribute__((unused)), int32_t *_err_xd __attribute__((unused)), int32_t *_err_yd __attribute__((unused)), int32_t *_err_sum_x __attribute__((unused)), int32_t *_err_sum_y __attribute__((unused)), int32_t *_cmd_x __attribute__((unused)), int32_t *_cmd_y __attribute__((unused)), int32_t *_cmd_heading __attribute__((unused))) {}

#define DOWNLINK_SEND_ROTORCRAFT_FP(_trans, _dev, east, north, up, veast, vnorth, vup, phi, theta, psi, carrot_east, carrot_north, carrot_up, carrot_psi, thrust, flight_time) {}
static inline void pprz_send_msg_ROTORCRAFT_FP(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_east __attribute__((unused)), int32_t *_north __attribute__((unused)), int32_t *_up __attribute__((unused)), int32_t *_veast __attribute__((unused)), int32_t *_vnorth __attribute__((unused)), int32_t *_vup __attribute__((unused)), int32_t *_phi __attribute__((unused)), int32_t *_theta __attribute__((unused)), int32_t *_psi __attribute__((unused)), int32_t *_carrot_east __attribute__((unused)), int32_t *_carrot_north __attribute__((unused)), int32_t *_carrot_up __attribute__((unused)), int32_t *_carrot_psi __attribute__((unused)), int32_t *_thrust __attribute__((unused)), uint16_t *_flight_time __attribute__((unused))) {}

#define DOWNLINK_SEND_TEMP_ADC(_trans, _dev, temp1, temp2, temp3) {}
static inline void pprz_send_msg_TEMP_ADC(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_temp1 __attribute__((unused)), float *_temp2 __attribute__((unused)), float *_temp3 __attribute__((unused))) {}

#define DOWNLINK_SEND_GUIDANCE_H_REF_INT(_trans, _dev, sp_x, ref_x, sp_xd, ref_xd, ref_xdd, sp_y, ref_y, sp_yd, ref_yd, ref_ydd) {}
static inline void pprz_send_msg_GUIDANCE_H_REF_INT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_sp_x __attribute__((unused)), int32_t *_ref_x __attribute__((unused)), int32_t *_sp_xd __attribute__((unused)), int32_t *_ref_xd __attribute__((unused)), int32_t *_ref_xdd __attribute__((unused)), int32_t *_sp_y __attribute__((unused)), int32_t *_ref_y __attribute__((unused)), int32_t *_sp_yd __attribute__((unused)), int32_t *_ref_yd __attribute__((unused)), int32_t *_ref_ydd __attribute__((unused))) {}

#define DOWNLINK_SEND_ROTORCRAFT_TUNE_HOVER(_trans, _dev, rc_roll, rc_pitch, rc_yaw, cmd_roll, cmd_pitch, cmd_yaw, cmd_thrust, body_phi, body_theta, body_psi) {}
static inline void pprz_send_msg_ROTORCRAFT_TUNE_HOVER(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_rc_roll __attribute__((unused)), int16_t *_rc_pitch __attribute__((unused)), int16_t *_rc_yaw __attribute__((unused)), int32_t *_cmd_roll __attribute__((unused)), int32_t *_cmd_pitch __attribute__((unused)), int32_t *_cmd_yaw __attribute__((unused)), int32_t *_cmd_thrust __attribute__((unused)), int32_t *_body_phi __attribute__((unused)), int32_t *_body_theta __attribute__((unused)), int32_t *_body_psi __attribute__((unused))) {}

#define DOWNLINK_SEND_INS_Z(_trans, _dev, baro_z, ins_z, ins_zd, ins_zdd) {}
static inline void pprz_send_msg_INS_Z(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_baro_z __attribute__((unused)), int32_t *_ins_z __attribute__((unused)), int32_t *_ins_zd __attribute__((unused)), int32_t *_ins_zdd __attribute__((unused))) {}

#define DOWNLINK_SEND_PCAP01_STATUS(_trans, _dev, ihumid, itemp, humid, temp) {}
static inline void pprz_send_msg_PCAP01_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_ihumid __attribute__((unused)), uint32_t *_itemp __attribute__((unused)), float *_humid __attribute__((unused)), float *_temp __attribute__((unused))) {}

#define DOWNLINK_SEND_GEIGER_COUNTER(_trans, _dev, tube1, tube2, vsupply) {}
static inline void pprz_send_msg_GEIGER_COUNTER(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_tube1 __attribute__((unused)), uint32_t *_tube2 __attribute__((unused)), uint16_t *_vsupply __attribute__((unused))) {}

#define DOWNLINK_SEND_INS_REF(_trans, _dev, ecef_x0, ecef_y0, ecef_z0, lat0, lon0, alt0, hmsl0, baro_qfe) {}
static inline void pprz_send_msg_INS_REF(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_ecef_x0 __attribute__((unused)), int32_t *_ecef_y0 __attribute__((unused)), int32_t *_ecef_z0 __attribute__((unused)), int32_t *_lat0 __attribute__((unused)), int32_t *_lon0 __attribute__((unused)), int32_t *_alt0 __attribute__((unused)), int32_t *_hmsl0 __attribute__((unused)), float *_baro_qfe __attribute__((unused))) {}

#define DOWNLINK_SEND_GPS_INT(_trans, _dev, ecef_x, ecef_y, ecef_z, lat, lon, alt, hmsl, ecef_xd, ecef_yd, ecef_zd, pacc, sacc, tow, pdop, numsv, fix, comp_id) {}
static inline void pprz_send_msg_GPS_INT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_ecef_x __attribute__((unused)), int32_t *_ecef_y __attribute__((unused)), int32_t *_ecef_z __attribute__((unused)), int32_t *_lat __attribute__((unused)), int32_t *_lon __attribute__((unused)), int32_t *_alt __attribute__((unused)), int32_t *_hmsl __attribute__((unused)), int32_t *_ecef_xd __attribute__((unused)), int32_t *_ecef_yd __attribute__((unused)), int32_t *_ecef_zd __attribute__((unused)), uint32_t *_pacc __attribute__((unused)), uint32_t *_sacc __attribute__((unused)), uint32_t *_tow __attribute__((unused)), uint16_t *_pdop __attribute__((unused)), uint8_t *_numsv __attribute__((unused)), uint8_t *_fix __attribute__((unused)), uint8_t *_comp_id __attribute__((unused))) {}

#define DOWNLINK_SEND_AHRS_EULER_INT(_trans, _dev, imu_phi, imu_theta, imu_psi, body_phi, body_theta, body_psi, comp_id) {}
static inline void pprz_send_msg_AHRS_EULER_INT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_imu_phi __attribute__((unused)), int32_t *_imu_theta __attribute__((unused)), int32_t *_imu_psi __attribute__((unused)), int32_t *_body_phi __attribute__((unused)), int32_t *_body_theta __attribute__((unused)), int32_t *_body_psi __attribute__((unused)), uint8_t *_comp_id __attribute__((unused))) {}

#define DOWNLINK_SEND_AHRS_QUAT_INT(_trans, _dev, weight, imu_qi, imu_qx, imu_qy, imu_qz, body_qi, body_qx, body_qy, body_qz, comp_id) {}
static inline void pprz_send_msg_AHRS_QUAT_INT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_weight __attribute__((unused)), int32_t *_imu_qi __attribute__((unused)), int32_t *_imu_qx __attribute__((unused)), int32_t *_imu_qy __attribute__((unused)), int32_t *_imu_qz __attribute__((unused)), int32_t *_body_qi __attribute__((unused)), int32_t *_body_qx __attribute__((unused)), int32_t *_body_qy __attribute__((unused)), int32_t *_body_qz __attribute__((unused)), uint8_t *_comp_id __attribute__((unused))) {}

#define DOWNLINK_SEND_AHRS_RMAT_INT(_trans, _dev, imu_m00, imu_m01, imu_m02, imu_m10, imu_m11, imu_m12, imu_m20, imu_m21, imu_m22, body_m00, body_m01, body_m02, body_m10, body_m11, body_m12, body_m20, body_m21, body_m22, comp_id) {}
static inline void pprz_send_msg_AHRS_RMAT_INT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_imu_m00 __attribute__((unused)), int32_t *_imu_m01 __attribute__((unused)), int32_t *_imu_m02 __attribute__((unused)), int32_t *_imu_m10 __attribute__((unused)), int32_t *_imu_m11 __attribute__((unused)), int32_t *_imu_m12 __attribute__((unused)), int32_t *_imu_m20 __attribute__((unused)), int32_t *_imu_m21 __attribute__((unused)), int32_t *_imu_m22 __attribute__((unused)), int32_t *_body_m00 __attribute__((unused)), int32_t *_body_m01 __attribute__((unused)), int32_t *_body_m02 __attribute__((unused)), int32_t *_body_m10 __attribute__((unused)), int32_t *_body_m11 __attribute__((unused)), int32_t *_body_m12 __attribute__((unused)), int32_t *_body_m20 __attribute__((unused)), int32_t *_body_m21 __attribute__((unused)), int32_t *_body_m22 __attribute__((unused)), uint8_t *_comp_id __attribute__((unused))) {}

#define DOWNLINK_SEND_ROTORCRAFT_NAV_STATUS(_trans, _dev, block_time, stage_time, dist_home, dist_wp, cur_block, cur_stage, horizontal_mode) {}
static inline void pprz_send_msg_ROTORCRAFT_NAV_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_block_time __attribute__((unused)), uint16_t *_stage_time __attribute__((unused)), float *_dist_home __attribute__((unused)), float *_dist_wp __attribute__((unused)), uint8_t *_cur_block __attribute__((unused)), uint8_t *_cur_stage __attribute__((unused)), uint8_t *_horizontal_mode __attribute__((unused))) {}

#define DOWNLINK_SEND_ROTORCRAFT_RADIO_CONTROL(_trans, _dev, roll, pitch, yaw, throttle, mode, kill, status) {}
static inline void pprz_send_msg_ROTORCRAFT_RADIO_CONTROL(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_roll __attribute__((unused)), int16_t *_pitch __attribute__((unused)), int16_t *_yaw __attribute__((unused)), int16_t *_throttle __attribute__((unused)), int16_t *_mode __attribute__((unused)), int16_t *_kill __attribute__((unused)), uint8_t *_status __attribute__((unused))) {}

#define DOWNLINK_SEND_VFF_EXTENDED(_trans, _dev, meas_baro, meas_alt, z, zd, zdd, bias, offset) {}
static inline void pprz_send_msg_VFF_EXTENDED(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_meas_baro __attribute__((unused)), float *_meas_alt __attribute__((unused)), float *_z __attribute__((unused)), float *_zd __attribute__((unused)), float *_zdd __attribute__((unused)), float *_bias __attribute__((unused)), float *_offset __attribute__((unused))) {}

#define DOWNLINK_SEND_VFF(_trans, _dev, measure, z, zd, bias, Pzz, Pzdzd, Pbb) {}
static inline void pprz_send_msg_VFF(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_measure __attribute__((unused)), float *_z __attribute__((unused)), float *_zd __attribute__((unused)), float *_bias __attribute__((unused)), float *_Pzz __attribute__((unused)), float *_Pzdzd __attribute__((unused)), float *_Pbb __attribute__((unused))) {}

#define DOWNLINK_SEND_GEO_MAG(_trans, _dev, Hx, Hy, Hz, comp_id) {}
static inline void pprz_send_msg_GEO_MAG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_Hx __attribute__((unused)), float *_Hy __attribute__((unused)), float *_Hz __attribute__((unused)), uint8_t *_comp_id __attribute__((unused))) {}

#define DOWNLINK_SEND_HFF(_trans, _dev, x, y, xd, yd, xdd, ydd) {}
static inline void pprz_send_msg_HFF(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_x __attribute__((unused)), float *_y __attribute__((unused)), float *_xd __attribute__((unused)), float *_yd __attribute__((unused)), float *_xdd __attribute__((unused)), float *_ydd __attribute__((unused))) {}

#define DOWNLINK_SEND_HFF_DBG(_trans, _dev, x_measure, y_measure, xd_measure, yd_measure, Pxx, Pyy, Pxdxd, Pydyd) {}
static inline void pprz_send_msg_HFF_DBG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_x_measure __attribute__((unused)), float *_y_measure __attribute__((unused)), float *_xd_measure __attribute__((unused)), float *_yd_measure __attribute__((unused)), float *_Pxx __attribute__((unused)), float *_Pyy __attribute__((unused)), float *_Pxdxd __attribute__((unused)), float *_Pydyd __attribute__((unused))) {}

#define DOWNLINK_SEND_HFF_GPS(_trans, _dev, lag_cnt, lag_cnt_err, save_cnt) {}
static inline void pprz_send_msg_HFF_GPS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_lag_cnt __attribute__((unused)), int16_t *_lag_cnt_err __attribute__((unused)), int16_t *_save_cnt __attribute__((unused))) {}

#define DOWNLINK_SEND_INS_SONAR(_trans, _dev, distance, var) {}
static inline void pprz_send_msg_INS_SONAR(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_distance __attribute__((unused)), float *_var __attribute__((unused))) {}

#define DOWNLINK_SEND_ROTORCRAFT_CAM(_trans, _dev, tilt, pan) {}
static inline void pprz_send_msg_ROTORCRAFT_CAM(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_tilt __attribute__((unused)), int16_t *_pan __attribute__((unused))) {}

#define DOWNLINK_SEND_AHRS_REF_QUAT(_trans, _dev, ref_qi, ref_qx, ref_qy, ref_qz, body_qi, body_qx, body_qy, body_qz) {}
static inline void pprz_send_msg_AHRS_REF_QUAT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_ref_qi __attribute__((unused)), int32_t *_ref_qx __attribute__((unused)), int32_t *_ref_qy __attribute__((unused)), int32_t *_ref_qz __attribute__((unused)), int32_t *_body_qi __attribute__((unused)), int32_t *_body_qx __attribute__((unused)), int32_t *_body_qy __attribute__((unused)), int32_t *_body_qz __attribute__((unused))) {}

#define DOWNLINK_SEND_EKF7_XHAT(_trans, _dev, c, s1, s2, s3, p, q, r, bp, bq, br) {}
static inline void pprz_send_msg_EKF7_XHAT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_c __attribute__((unused)), float *_s1 __attribute__((unused)), float *_s2 __attribute__((unused)), float *_s3 __attribute__((unused)), float *_p __attribute__((unused)), float *_q __attribute__((unused)), float *_r __attribute__((unused)), float *_bp __attribute__((unused)), float *_bq __attribute__((unused)), float *_br __attribute__((unused))) {}

#define DOWNLINK_SEND_EKF7_Y(_trans, _dev, timecount, g1, g2, g3, m1, m2, m3, p, q, r) {}
static inline void pprz_send_msg_EKF7_Y(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_timecount __attribute__((unused)), float *_g1 __attribute__((unused)), float *_g2 __attribute__((unused)), float *_g3 __attribute__((unused)), float *_m1 __attribute__((unused)), float *_m2 __attribute__((unused)), float *_m3 __attribute__((unused)), float *_p __attribute__((unused)), float *_q __attribute__((unused)), float *_r __attribute__((unused))) {}

#define DOWNLINK_SEND_EKF7_P_DIAG(_trans, _dev, c, s1, s2, s3, p, q, r, bp, bq, br) {}
static inline void pprz_send_msg_EKF7_P_DIAG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_c __attribute__((unused)), float *_s1 __attribute__((unused)), float *_s2 __attribute__((unused)), float *_s3 __attribute__((unused)), float *_p __attribute__((unused)), float *_q __attribute__((unused)), float *_r __attribute__((unused)), float *_bp __attribute__((unused)), float *_bq __attribute__((unused)), float *_br __attribute__((unused))) {}

#define DOWNLINK_SEND_AHRS_EULER(_trans, _dev, phi, theta, psi, comp_id) {}
static inline void pprz_send_msg_AHRS_EULER(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_phi __attribute__((unused)), float *_theta __attribute__((unused)), float *_psi __attribute__((unused)), uint8_t *_comp_id __attribute__((unused))) {}

#define DOWNLINK_SEND_AHRS_MEASUREMENT_EULER(_trans, _dev, phi, theta, psi) {}
static inline void pprz_send_msg_AHRS_MEASUREMENT_EULER(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_phi __attribute__((unused)), float *_theta __attribute__((unused)), float *_psi __attribute__((unused))) {}

#define DOWNLINK_SEND_WT(_trans, _dev, rpm) {}
static inline void pprz_send_msg_WT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_rpm __attribute__((unused))) {}

#define DOWNLINK_SEND_CSC_CAN_DEBUG(_trans, _dev, err_nb, err_code) {}
static inline void pprz_send_msg_CSC_CAN_DEBUG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_err_nb __attribute__((unused)), uint32_t *_err_code __attribute__((unused))) {}

#define DOWNLINK_SEND_CSC_CAN_MSG(_trans, _dev, frame, id, data_a, data_b) {}
static inline void pprz_send_msg_CSC_CAN_MSG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_frame __attribute__((unused)), uint32_t *_id __attribute__((unused)), uint32_t *_data_a __attribute__((unused)), uint32_t *_data_b __attribute__((unused))) {}

#define DOWNLINK_SEND_AHRS_GYRO_BIAS_INT(_trans, _dev, bp, bq, br, comp_id) {}
static inline void pprz_send_msg_AHRS_GYRO_BIAS_INT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_bp __attribute__((unused)), int32_t *_bq __attribute__((unused)), int32_t *_br __attribute__((unused)), uint8_t *_comp_id __attribute__((unused))) {}

#define DOWNLINK_SEND_AEROPROBE(_trans, _dev, counter, velocity, a_attack, a_sideslip, altitude, dynamic_p, static_p, checksum) {}
static inline void pprz_send_msg_AEROPROBE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_counter __attribute__((unused)), int16_t *_velocity __attribute__((unused)), int16_t *_a_attack __attribute__((unused)), int16_t *_a_sideslip __attribute__((unused)), int32_t *_altitude __attribute__((unused)), int32_t *_dynamic_p __attribute__((unused)), int32_t *_static_p __attribute__((unused)), uint8_t *_checksum __attribute__((unused))) {}

#define DOWNLINK_SEND_FMS_TIME(_trans, _dev, tv_sec, tv_nsec, delay_ns) {}
static inline void pprz_send_msg_FMS_TIME(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_tv_sec __attribute__((unused)), uint32_t *_tv_nsec __attribute__((unused)), uint32_t *_delay_ns __attribute__((unused))) {}

#define DOWNLINK_SEND_LOADCELL(_trans, _dev, load) {}
static inline void pprz_send_msg_LOADCELL(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_load __attribute__((unused))) {}

#define DOWNLINK_SEND_FLA_DEBUG(_trans, _dev, past_input, imu_rate, desired_accel, motor_command) {}
static inline void pprz_send_msg_FLA_DEBUG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_past_input __attribute__((unused)), float *_imu_rate __attribute__((unused)), float *_desired_accel __attribute__((unused)), float *_motor_command __attribute__((unused))) {}

#define DOWNLINK_SEND_BLMC_FAULT_STATUS(_trans, _dev, nb_raw_fault, raw_fault) {}
static inline void pprz_send_msg_BLMC_FAULT_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_raw_fault __attribute__((unused)), uint16_t *_raw_fault __attribute__((unused))) {}

#define DOWNLINK_SEND_BLMC_SPEEDS(_trans, _dev, nb_speeds, speeds) {}
static inline void pprz_send_msg_BLMC_SPEEDS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_speeds __attribute__((unused)), int16_t *_speeds __attribute__((unused))) {}

#define DOWNLINK_SEND_AHRS_DEBUG_QUAT(_trans, _dev, jqi, jqx, jqy, jqz, xqi, xqx, xqy, xqz, mqi, mqx, mqy, mqz) {}
static inline void pprz_send_msg_AHRS_DEBUG_QUAT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_jqi __attribute__((unused)), float *_jqx __attribute__((unused)), float *_jqy __attribute__((unused)), float *_jqz __attribute__((unused)), float *_xqi __attribute__((unused)), float *_xqx __attribute__((unused)), float *_xqy __attribute__((unused)), float *_xqz __attribute__((unused)), float *_mqi __attribute__((unused)), float *_mqx __attribute__((unused)), float *_mqy __attribute__((unused)), float *_mqz __attribute__((unused))) {}

#define DOWNLINK_SEND_BLMC_BUSVOLTS(_trans, _dev, nb_busvolts, busvolts) {}
static inline void pprz_send_msg_BLMC_BUSVOLTS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_busvolts __attribute__((unused)), uint16_t *_busvolts __attribute__((unused))) {}

#define DOWNLINK_SEND_SYSTEM_STATUS(_trans, _dev, csc1_loop_count, csc1_msg_count, csc2_loop_count, csc2_msg_count, can_rx_err, can_tx_err, rc_parser_err, system_fault) {}
static inline void pprz_send_msg_SYSTEM_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_csc1_loop_count __attribute__((unused)), uint32_t *_csc1_msg_count __attribute__((unused)), uint32_t *_csc2_loop_count __attribute__((unused)), uint32_t *_csc2_msg_count __attribute__((unused)), uint32_t *_can_rx_err __attribute__((unused)), uint32_t *_can_tx_err __attribute__((unused)), uint32_t *_rc_parser_err __attribute__((unused)), uint8_t *_system_fault __attribute__((unused))) {}

#define DOWNLINK_SEND_DYNAMIXEL(_trans, _dev, left_wing, right_wing, left_wing_flag, right_wing_flag, invalid_position, timeout_events, checksum_errors, fuse_rotation_angle, fuse_rotation_rate) {}
static inline void pprz_send_msg_DYNAMIXEL(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_left_wing __attribute__((unused)), uint16_t *_right_wing __attribute__((unused)), uint8_t *_left_wing_flag __attribute__((unused)), uint8_t *_right_wing_flag __attribute__((unused)), uint32_t *_invalid_position __attribute__((unused)), uint32_t *_timeout_events __attribute__((unused)), uint32_t *_checksum_errors __attribute__((unused)), float *_fuse_rotation_angle __attribute__((unused)), float *_fuse_rotation_rate __attribute__((unused))) {}

#define DOWNLINK_SEND_RMAT_DEBUG(_trans, _dev, a, b, c, d, e, f, g, h, i) {}
static inline void pprz_send_msg_RMAT_DEBUG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_a __attribute__((unused)), float *_b __attribute__((unused)), float *_c __attribute__((unused)), float *_d __attribute__((unused)), float *_e __attribute__((unused)), float *_f __attribute__((unused)), float *_g __attribute__((unused)), float *_h __attribute__((unused)), float *_i __attribute__((unused))) {}

#define DOWNLINK_SEND_SIMPLE_COMMANDS(_trans, _dev, roll, pitch, yaw) {}
static inline void pprz_send_msg_SIMPLE_COMMANDS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int16_t *_roll __attribute__((unused)), int16_t *_pitch __attribute__((unused)), int16_t *_yaw __attribute__((unused))) {}

#define DOWNLINK_SEND_VANE_SENSOR(_trans, _dev, alpha, alpha_filtered, alpha_target, alpha_vane_error, alpha2, beta, beta_filtered, beta_target, beta_vane_error, beta2) {}
static inline void pprz_send_msg_VANE_SENSOR(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_alpha __attribute__((unused)), float *_alpha_filtered __attribute__((unused)), float *_alpha_target __attribute__((unused)), float *_alpha_vane_error __attribute__((unused)), float *_alpha2 __attribute__((unused)), float *_beta __attribute__((unused)), float *_beta_filtered __attribute__((unused)), float *_beta_target __attribute__((unused)), float *_beta_vane_error __attribute__((unused)), float *_beta2 __attribute__((unused))) {}

#define DOWNLINK_SEND_CONTROLLER_GAINS(_trans, _dev, roll_gamma_p, roll_gamma_d, roll_gamma_i, pitch_gamma_p, pitch_gamma_d, pitch_gamma_i, yaw_gamma_p, yaw_gamma_d, yaw_gamma_i) {}
static inline void pprz_send_msg_CONTROLLER_GAINS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_roll_gamma_p __attribute__((unused)), float *_roll_gamma_d __attribute__((unused)), float *_roll_gamma_i __attribute__((unused)), float *_pitch_gamma_p __attribute__((unused)), float *_pitch_gamma_d __attribute__((unused)), float *_pitch_gamma_i __attribute__((unused)), float *_yaw_gamma_p __attribute__((unused)), float *_yaw_gamma_d __attribute__((unused)), float *_yaw_gamma_i __attribute__((unused))) {}

#define DOWNLINK_SEND_AHRS_LKF(_trans, _dev, phi, theta, psi, qi, qx, qy, qz, p, q, r, ax, ay, az, mx, my, mz) {}
static inline void pprz_send_msg_AHRS_LKF(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_phi __attribute__((unused)), float *_theta __attribute__((unused)), float *_psi __attribute__((unused)), float *_qi __attribute__((unused)), float *_qx __attribute__((unused)), float *_qy __attribute__((unused)), float *_qz __attribute__((unused)), float *_p __attribute__((unused)), float *_q __attribute__((unused)), float *_r __attribute__((unused)), float *_ax __attribute__((unused)), float *_ay __attribute__((unused)), float *_az __attribute__((unused)), float *_mx __attribute__((unused)), float *_my __attribute__((unused)), float *_mz __attribute__((unused))) {}

#define DOWNLINK_SEND_AHRS_LKF_DEBUG(_trans, _dev, phi_err, theta_err, psi_err, bp, bq, br, quat_norm, phi_accel, theta_accel, phi_cov, theta_cov, psi_cov, bp_cov, bq_cov, br_cov) {}
static inline void pprz_send_msg_AHRS_LKF_DEBUG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_phi_err __attribute__((unused)), float *_theta_err __attribute__((unused)), float *_psi_err __attribute__((unused)), float *_bp __attribute__((unused)), float *_bq __attribute__((unused)), float *_br __attribute__((unused)), float *_quat_norm __attribute__((unused)), float *_phi_accel __attribute__((unused)), float *_theta_accel __attribute__((unused)), float *_phi_cov __attribute__((unused)), float *_theta_cov __attribute__((unused)), float *_psi_cov __attribute__((unused)), float *_bp_cov __attribute__((unused)), float *_bq_cov __attribute__((unused)), float *_br_cov __attribute__((unused))) {}

#define DOWNLINK_SEND_AHRS_LKF_ACC_DBG(_trans, _dev, qi_err, qx_err, qy_err, qz_err, bp_err, bq_err, br_err) {}
static inline void pprz_send_msg_AHRS_LKF_ACC_DBG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_qi_err __attribute__((unused)), float *_qx_err __attribute__((unused)), float *_qy_err __attribute__((unused)), float *_qz_err __attribute__((unused)), float *_bp_err __attribute__((unused)), float *_bq_err __attribute__((unused)), float *_br_err __attribute__((unused))) {}

#define DOWNLINK_SEND_AHRS_LKF_MAG_DBG(_trans, _dev, qi_err, qx_err, qy_err, qz_err, bp_err, bq_err, br_err) {}
static inline void pprz_send_msg_AHRS_LKF_MAG_DBG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_qi_err __attribute__((unused)), float *_qx_err __attribute__((unused)), float *_qy_err __attribute__((unused)), float *_qz_err __attribute__((unused)), float *_bp_err __attribute__((unused)), float *_bq_err __attribute__((unused)), float *_br_err __attribute__((unused))) {}

#define DOWNLINK_SEND_NPS_SENSORS_SCALED(_trans, _dev, acc_x, acc_y, acc_z, mag_x, mag_y, mag_z) {}
static inline void pprz_send_msg_NPS_SENSORS_SCALED(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_acc_x __attribute__((unused)), float *_acc_y __attribute__((unused)), float *_acc_z __attribute__((unused)), float *_mag_x __attribute__((unused)), float *_mag_y __attribute__((unused)), float *_mag_z __attribute__((unused))) {}

#define DOWNLINK_SEND_INS(_trans, _dev, ins_x, ins_y, ins_z, ins_xd, ins_yd, ins_zd, ins_xdd, ins_ydd, ins_zdd) {}
static inline void pprz_send_msg_INS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_ins_x __attribute__((unused)), int32_t *_ins_y __attribute__((unused)), int32_t *_ins_z __attribute__((unused)), int32_t *_ins_xd __attribute__((unused)), int32_t *_ins_yd __attribute__((unused)), int32_t *_ins_zd __attribute__((unused)), int32_t *_ins_xdd __attribute__((unused)), int32_t *_ins_ydd __attribute__((unused)), int32_t *_ins_zdd __attribute__((unused))) {}

#define DOWNLINK_SEND_GPS_ERROR(_trans, _dev, x_position, y_position, z_position, x_velocity, y_velocity, z_velocity) {}
static inline void pprz_send_msg_GPS_ERROR(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_x_position __attribute__((unused)), float *_y_position __attribute__((unused)), float *_z_position __attribute__((unused)), float *_x_velocity __attribute__((unused)), float *_y_velocity __attribute__((unused)), float *_z_velocity __attribute__((unused))) {}

#define DOWNLINK_SEND_IMU_GYRO(_trans, _dev, gp, gq, gr) {}
static inline void pprz_send_msg_IMU_GYRO(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_gp __attribute__((unused)), float *_gq __attribute__((unused)), float *_gr __attribute__((unused))) {}

#define DOWNLINK_SEND_IMU_MAG(_trans, _dev, mx, my, mz) {}
static inline void pprz_send_msg_IMU_MAG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_mx __attribute__((unused)), float *_my __attribute__((unused)), float *_mz __attribute__((unused))) {}

#define DOWNLINK_SEND_IMU_ACCEL(_trans, _dev, ax, ay, az) {}
static inline void pprz_send_msg_IMU_ACCEL(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_ax __attribute__((unused)), float *_ay __attribute__((unused)), float *_az __attribute__((unused))) {}

#define DOWNLINK_SEND_IMU_GYRO_RAW(_trans, _dev, gp, gq, gr) {}
static inline void pprz_send_msg_IMU_GYRO_RAW(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_gp __attribute__((unused)), int32_t *_gq __attribute__((unused)), int32_t *_gr __attribute__((unused))) {}

#define DOWNLINK_SEND_IMU_ACCEL_RAW(_trans, _dev, ax, ay, az) {}
static inline void pprz_send_msg_IMU_ACCEL_RAW(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_ax __attribute__((unused)), int32_t *_ay __attribute__((unused)), int32_t *_az __attribute__((unused))) {}

#define DOWNLINK_SEND_IMU_MAG_RAW(_trans, _dev, mx, my, mz) {}
static inline void pprz_send_msg_IMU_MAG_RAW(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_mx __attribute__((unused)), int32_t *_my __attribute__((unused)), int32_t *_mz __attribute__((unused))) {}

#define DOWNLINK_SEND_IMU_MAG_SETTINGS(_trans, _dev, inclination, declination, hardiron_x, hardiron_y, hardiron_z) {}
static inline void pprz_send_msg_IMU_MAG_SETTINGS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_inclination __attribute__((unused)), float *_declination __attribute__((unused)), float *_hardiron_x __attribute__((unused)), float *_hardiron_y __attribute__((unused)), float *_hardiron_z __attribute__((unused))) {}

#define DOWNLINK_SEND_IMU_MAG_CURRENT_CALIBRATION(_trans, _dev, mx, my, mz, electrical_current) {}
static inline void pprz_send_msg_IMU_MAG_CURRENT_CALIBRATION(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_mx __attribute__((unused)), int32_t *_my __attribute__((unused)), int32_t *_mz __attribute__((unused)), int32_t *_electrical_current __attribute__((unused))) {}

#define DOWNLINK_SEND_UART_ERRORS(_trans, _dev, overrun_cnt, noise_err_cnt, framing_err_cnt, bus_number) {}
static inline void pprz_send_msg_UART_ERRORS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_overrun_cnt __attribute__((unused)), uint16_t *_noise_err_cnt __attribute__((unused)), uint16_t *_framing_err_cnt __attribute__((unused)), uint8_t *_bus_number __attribute__((unused))) {}

#define DOWNLINK_SEND_IMU_GYRO_LP(_trans, _dev, gp, gq, gr) {}
static inline void pprz_send_msg_IMU_GYRO_LP(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_gp __attribute__((unused)), float *_gq __attribute__((unused)), float *_gr __attribute__((unused))) {}

#define DOWNLINK_SEND_IMU_PRESSURE(_trans, _dev, p) {}
static inline void pprz_send_msg_IMU_PRESSURE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_p __attribute__((unused))) {}

#define DOWNLINK_SEND_IMU_HS_GYRO(_trans, _dev, axis, nb_samples, samples) {}
static inline void pprz_send_msg_IMU_HS_GYRO(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_axis __attribute__((unused)), uint8_t nb_samples __attribute__((unused)), uint32_t *_samples __attribute__((unused))) {}

#define DOWNLINK_SEND_TEST_PASSTHROUGH_STATUS(_trans, _dev, io_proc_msg_cnt, io_proc_err_cnt, io_link_msg_cnt, io_link_err_cnt, rc_status) {}
static inline void pprz_send_msg_TEST_PASSTHROUGH_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_io_proc_msg_cnt __attribute__((unused)), uint32_t *_io_proc_err_cnt __attribute__((unused)), uint32_t *_io_link_msg_cnt __attribute__((unused)), uint32_t *_io_link_err_cnt __attribute__((unused)), uint8_t *_rc_status __attribute__((unused))) {}

#define DOWNLINK_SEND_TUNE_VERT(_trans, _dev, z_sp, est_z, ref_z, ref_zd) {}
static inline void pprz_send_msg_TUNE_VERT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_z_sp __attribute__((unused)), int32_t *_est_z __attribute__((unused)), int32_t *_ref_z __attribute__((unused)), int32_t *_ref_zd __attribute__((unused))) {}

#define DOWNLINK_SEND_MF_DAQ_STATE(_trans, _dev, flight_time, p, q, r, phi, theta, psi, ax, ay, az, ve, vn, vu, lat, lon, alt, we, wn) {}
static inline void pprz_send_msg_MF_DAQ_STATE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_flight_time __attribute__((unused)), float *_p __attribute__((unused)), float *_q __attribute__((unused)), float *_r __attribute__((unused)), float *_phi __attribute__((unused)), float *_theta __attribute__((unused)), float *_psi __attribute__((unused)), float *_ax __attribute__((unused)), float *_ay __attribute__((unused)), float *_az __attribute__((unused)), float *_ve __attribute__((unused)), float *_vn __attribute__((unused)), float *_vu __attribute__((unused)), float *_lat __attribute__((unused)), float *_lon __attribute__((unused)), float *_alt __attribute__((unused)), float *_we __attribute__((unused)), float *_wn __attribute__((unused))) {}

#define DOWNLINK_SEND_INFO_MSG(_trans, _dev, nb_msg, msg) {}
static inline void pprz_send_msg_INFO_MSG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_msg __attribute__((unused)), char *_msg __attribute__((unused))) {}

#define DOWNLINK_SEND_STAB_ATTITUDE_INDI(_trans, _dev, angular_accel_p, angular_accel_q, angular_accel_r, angular_accel_ref_p, angular_accel_ref_q, angular_accel_ref_r, g1_p, g1_q, g1_r, g2_r) {}
static inline void pprz_send_msg_STAB_ATTITUDE_INDI(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_angular_accel_p __attribute__((unused)), float *_angular_accel_q __attribute__((unused)), float *_angular_accel_r __attribute__((unused)), float *_angular_accel_ref_p __attribute__((unused)), float *_angular_accel_ref_q __attribute__((unused)), float *_angular_accel_ref_r __attribute__((unused)), float *_g1_p __attribute__((unused)), float *_g1_q __attribute__((unused)), float *_g1_r __attribute__((unused)), float *_g2_r __attribute__((unused))) {}

#define DOWNLINK_SEND_BEBOP_ACTUATORS(_trans, _dev, cmd_thrust, cmd_roll, cmd_pitch, cmd_yaw, rpm_ref_lf, rpm_ref_rf, rpm_ref_rb, rpm_ref_lb, rpm_obs_lf, rpm_obs_rf, rpm_obs_rb, rpm_obs_lb) {}
static inline void pprz_send_msg_BEBOP_ACTUATORS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), int32_t *_cmd_thrust __attribute__((unused)), int32_t *_cmd_roll __attribute__((unused)), int32_t *_cmd_pitch __attribute__((unused)), int32_t *_cmd_yaw __attribute__((unused)), uint16_t *_rpm_ref_lf __attribute__((unused)), uint16_t *_rpm_ref_rf __attribute__((unused)), uint16_t *_rpm_ref_rb __attribute__((unused)), uint16_t *_rpm_ref_lb __attribute__((unused)), uint16_t *_rpm_obs_lf __attribute__((unused)), uint16_t *_rpm_obs_rf __attribute__((unused)), uint16_t *_rpm_obs_rb __attribute__((unused)), uint16_t *_rpm_obs_lb __attribute__((unused))) {}

#define DOWNLINK_SEND_WEATHER(_trans, _dev, p_amb, t_amb, windspeed, wind_from, humidity) {}
static inline void pprz_send_msg_WEATHER(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_p_amb __attribute__((unused)), float *_t_amb __attribute__((unused)), float *_windspeed __attribute__((unused)), float *_wind_from __attribute__((unused)), float *_humidity __attribute__((unused))) {}

#define DOWNLINK_SEND_IMU_TURNTABLE(_trans, _dev, omega) {}
static inline void pprz_send_msg_IMU_TURNTABLE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_omega __attribute__((unused))) {}

#define DOWNLINK_SEND_BARO_RAW(_trans, _dev, abs, diff) {}
static inline void pprz_send_msg_BARO_RAW(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_abs __attribute__((unused)), float *_diff __attribute__((unused))) {}

#define DOWNLINK_SEND_AIR_DATA(_trans, _dev, pressure, diff_p, temp, qnh, amsl_baro, airspeed, tas) {}
static inline void pprz_send_msg_AIR_DATA(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_pressure __attribute__((unused)), float *_diff_p __attribute__((unused)), float *_temp __attribute__((unused)), float *_qnh __attribute__((unused)), float *_amsl_baro __attribute__((unused)), float *_airspeed __attribute__((unused)), float *_tas __attribute__((unused))) {}

#define DOWNLINK_SEND_AMSL(_trans, _dev, AMSL_BARO, AMSL_GPS) {}
static inline void pprz_send_msg_AMSL(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_AMSL_BARO __attribute__((unused)), float *_AMSL_GPS __attribute__((unused))) {}

#define DOWNLINK_SEND_DIVERGENCE(_trans, _dev, divergence, divergence_vision, normalized_thrust, cov_div, pstate, pused, sonar) {}
static inline void pprz_send_msg_DIVERGENCE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_divergence __attribute__((unused)), float *_divergence_vision __attribute__((unused)), float *_normalized_thrust __attribute__((unused)), float *_cov_div __attribute__((unused)), float *_pstate __attribute__((unused)), float *_pused __attribute__((unused)), float *_sonar __attribute__((unused))) {}

#define DOWNLINK_SEND_VIDEO_SYNC(_trans, _dev, id) {}
static inline void pprz_send_msg_VIDEO_SYNC(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_id __attribute__((unused))) {}

#define DOWNLINK_SEND_PERIODIC_TELEMETRY_ERR(_trans, _dev, process, mode, id) {}
static inline void pprz_send_msg_PERIODIC_TELEMETRY_ERR(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_process __attribute__((unused)), uint8_t *_mode __attribute__((unused)), uint8_t *_id __attribute__((unused))) {}

#define DOWNLINK_SEND_TIME(_trans, _dev, t) {}
static inline void pprz_send_msg_TIME(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_t __attribute__((unused))) {}

#define DOWNLINK_SEND_OPTIC_FLOW_EST(_trans, _dev, fps, corner_cnt, tracked_cnt, flow_x, flow_y, flow_der_x, flow_der_y, vel_x, vel_y, div_size, surface_roughness, divergence) {}
static inline void pprz_send_msg_OPTIC_FLOW_EST(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_fps __attribute__((unused)), uint16_t *_corner_cnt __attribute__((unused)), uint16_t *_tracked_cnt __attribute__((unused)), int16_t *_flow_x __attribute__((unused)), int16_t *_flow_y __attribute__((unused)), int16_t *_flow_der_x __attribute__((unused)), int16_t *_flow_der_y __attribute__((unused)), float *_vel_x __attribute__((unused)), float *_vel_y __attribute__((unused)), float *_div_size __attribute__((unused)), float *_surface_roughness __attribute__((unused)), float *_divergence __attribute__((unused))) {}

#define DOWNLINK_SEND_STEREO_IMG(_trans, _dev, frequency, data_size, nb_imageBuffer, imageBuffer) {}
static inline void pprz_send_msg_STEREO_IMG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_frequency __attribute__((unused)), uint8_t *_data_size __attribute__((unused)), uint8_t nb_imageBuffer __attribute__((unused)), uint8_t *_imageBuffer __attribute__((unused))) {}

#define DOWNLINK_SEND_ROTORCRAFT_STATUS(_trans, _dev, link_imu_nb_err, motor_nb_err, rc_status, frame_rate, gps_status, ap_mode, ap_in_flight, ap_motors_on, ap_h_mode, ap_v_mode, vsupply, cpu_time) {}
static inline void pprz_send_msg_ROTORCRAFT_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_link_imu_nb_err __attribute__((unused)), uint8_t *_motor_nb_err __attribute__((unused)), uint8_t *_rc_status __attribute__((unused)), uint8_t *_frame_rate __attribute__((unused)), uint8_t *_gps_status __attribute__((unused)), uint8_t *_ap_mode __attribute__((unused)), uint8_t *_ap_in_flight __attribute__((unused)), uint8_t *_ap_motors_on __attribute__((unused)), uint8_t *_ap_h_mode __attribute__((unused)), uint8_t *_ap_v_mode __attribute__((unused)), uint16_t *_vsupply __attribute__((unused)), uint16_t *_cpu_time __attribute__((unused))) {}

#define DOWNLINK_SEND_STATE_FILTER_STATUS(_trans, _dev, id, state_filter_mode, value) {}
static inline void pprz_send_msg_STATE_FILTER_STATUS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_id __attribute__((unused)), uint8_t *_state_filter_mode __attribute__((unused)), uint16_t *_value __attribute__((unused))) {}

#define DOWNLINK_SEND_PX4FLOW(_trans, _dev, sensor_id, flow_x, flow_y, flow_comp_m_x, flow_comp_m_y, quality, ground_distance) {}
static inline void pprz_send_msg_PX4FLOW(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_sensor_id __attribute__((unused)), int16_t *_flow_x __attribute__((unused)), int16_t *_flow_y __attribute__((unused)), float *_flow_comp_m_x __attribute__((unused)), float *_flow_comp_m_y __attribute__((unused)), uint8_t *_quality __attribute__((unused)), float *_ground_distance __attribute__((unused))) {}

#define DOWNLINK_SEND_OPTICFLOW(_trans, _dev, flow, ref_alt) {}
static inline void pprz_send_msg_OPTICFLOW(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_flow __attribute__((unused)), float *_ref_alt __attribute__((unused))) {}

#define DOWNLINK_SEND_VISUALTARGET(_trans, _dev, x, y) {}
static inline void pprz_send_msg_VISUALTARGET(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_x __attribute__((unused)), uint16_t *_y __attribute__((unused))) {}

#define DOWNLINK_SEND_SONAR(_trans, _dev, sonar_meas, sonar_distance) {}
static inline void pprz_send_msg_SONAR(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_sonar_meas __attribute__((unused)), float *_sonar_distance __attribute__((unused))) {}

#define DOWNLINK_SEND_PAYLOAD_FLOAT(_trans, _dev, nb_values, values) {}
static inline void pprz_send_msg_PAYLOAD_FLOAT(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t nb_values __attribute__((unused)), float *_values __attribute__((unused))) {}

#define DOWNLINK_SEND_NPS_POS_LLH(_trans, _dev, pprz_lat, lat_geod, lat_geoc, pprz_lon, lon, pprz_alt, alt_geod, agl, asl) {}
static inline void pprz_send_msg_NPS_POS_LLH(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_pprz_lat __attribute__((unused)), float *_lat_geod __attribute__((unused)), float *_lat_geoc __attribute__((unused)), float *_pprz_lon __attribute__((unused)), float *_lon __attribute__((unused)), float *_pprz_alt __attribute__((unused)), float *_alt_geod __attribute__((unused)), float *_agl __attribute__((unused)), float *_asl __attribute__((unused))) {}

#define DOWNLINK_SEND_NPS_RPMS(_trans, _dev, front, back, right, left) {}
static inline void pprz_send_msg_NPS_RPMS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_front __attribute__((unused)), float *_back __attribute__((unused)), float *_right __attribute__((unused)), float *_left __attribute__((unused))) {}

#define DOWNLINK_SEND_NPS_SPEED_POS(_trans, _dev, ltpp_xdd, ltpp_ydd, ltpp_zdd, ltpp_xd, ltpp_yd, ltpp_zd, ltpp_x, ltpp_y, ltpp_z) {}
static inline void pprz_send_msg_NPS_SPEED_POS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_ltpp_xdd __attribute__((unused)), float *_ltpp_ydd __attribute__((unused)), float *_ltpp_zdd __attribute__((unused)), float *_ltpp_xd __attribute__((unused)), float *_ltpp_yd __attribute__((unused)), float *_ltpp_zd __attribute__((unused)), float *_ltpp_x __attribute__((unused)), float *_ltpp_y __attribute__((unused)), float *_ltpp_z __attribute__((unused))) {}

#define DOWNLINK_SEND_NPS_RATE_ATTITUDE(_trans, _dev, p, q, r, phi, theta, psi) {}
static inline void pprz_send_msg_NPS_RATE_ATTITUDE(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_p __attribute__((unused)), float *_q __attribute__((unused)), float *_r __attribute__((unused)), float *_phi __attribute__((unused)), float *_theta __attribute__((unused)), float *_psi __attribute__((unused))) {}

#define DOWNLINK_SEND_NPS_GYRO_BIAS(_trans, _dev, bp, bq, br) {}
static inline void pprz_send_msg_NPS_GYRO_BIAS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_bp __attribute__((unused)), float *_bq __attribute__((unused)), float *_br __attribute__((unused))) {}

#define DOWNLINK_SEND_NPS_RANGE_METER(_trans, _dev, dist) {}
static inline void pprz_send_msg_NPS_RANGE_METER(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_dist __attribute__((unused))) {}

#define DOWNLINK_SEND_NPS_WIND(_trans, _dev, vx, vy, vz) {}
static inline void pprz_send_msg_NPS_WIND(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_vx __attribute__((unused)), float *_vy __attribute__((unused)), float *_vz __attribute__((unused))) {}

#define DOWNLINK_SEND_ESC(_trans, _dev, amps, bat_volts, power, rpm, motor_volts, energy, motor_id) {}
static inline void pprz_send_msg_ESC(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_amps __attribute__((unused)), float *_bat_volts __attribute__((unused)), float *_power __attribute__((unused)), float *_rpm __attribute__((unused)), float *_motor_volts __attribute__((unused)), float *_energy __attribute__((unused)), uint8_t *_motor_id __attribute__((unused))) {}

#define DOWNLINK_SEND_RTOS_MON(_trans, _dev, nb_threads, cpu_load, core_free, heap_free) {}
static inline void pprz_send_msg_RTOS_MON(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_nb_threads __attribute__((unused)), uint8_t *_cpu_load __attribute__((unused)), uint32_t *_core_free __attribute__((unused)), uint32_t *_heap_free __attribute__((unused))) {}

#define DOWNLINK_SEND_PPRZ_DEBUG(_trans, _dev, module, errno) {}
static inline void pprz_send_msg_PPRZ_DEBUG(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_module __attribute__((unused)), uint8_t *_errno __attribute__((unused))) {}

#define DOWNLINK_SEND_NPS_ACCEL_LTP(_trans, _dev, xdd, ydd, zdd) {}
static inline void pprz_send_msg_NPS_ACCEL_LTP(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_xdd __attribute__((unused)), float *_ydd __attribute__((unused)), float *_zdd __attribute__((unused))) {}

#define DOWNLINK_SEND_LOOSE_INS_GPS(_trans, _dev, status, time_running, q0, q1, q2, q3, phi, theta, psi, north, east, down, v_north, v_east, v_down, est_p, est_q, est_r, gyroBias_x, gyroBias_y, gyroBias_z, imuCallbacks, gpsCallbacks, baroCallbacks) {}
static inline void pprz_send_msg_LOOSE_INS_GPS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint8_t *_status __attribute__((unused)), double *_time_running __attribute__((unused)), double *_q0 __attribute__((unused)), double *_q1 __attribute__((unused)), double *_q2 __attribute__((unused)), double *_q3 __attribute__((unused)), double *_phi __attribute__((unused)), double *_theta __attribute__((unused)), double *_psi __attribute__((unused)), double *_north __attribute__((unused)), double *_east __attribute__((unused)), double *_down __attribute__((unused)), double *_v_north __attribute__((unused)), double *_v_east __attribute__((unused)), double *_v_down __attribute__((unused)), double *_est_p __attribute__((unused)), double *_est_q __attribute__((unused)), double *_est_r __attribute__((unused)), double *_gyroBias_x __attribute__((unused)), double *_gyroBias_y __attribute__((unused)), double *_gyroBias_z __attribute__((unused)), uint32_t *_imuCallbacks __attribute__((unused)), uint32_t *_gpsCallbacks __attribute__((unused)), uint32_t *_baroCallbacks __attribute__((unused))) {}

#define DOWNLINK_SEND_AFL_COEFFS(_trans, _dev, roll_a, roll_b, roll_c, pitch_a, pitch_b, pitch_c, yaw_a, yaw_b, yaw_c) {}
static inline void pprz_send_msg_AFL_COEFFS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_roll_a __attribute__((unused)), float *_roll_b __attribute__((unused)), float *_roll_c __attribute__((unused)), float *_pitch_a __attribute__((unused)), float *_pitch_b __attribute__((unused)), float *_pitch_c __attribute__((unused)), float *_yaw_a __attribute__((unused)), float *_yaw_b __attribute__((unused)), float *_yaw_c __attribute__((unused))) {}

#define DOWNLINK_SEND_GPS_SMALL(_trans, _dev, multiplex_speed, lat, lon, alt) {}
static inline void pprz_send_msg_GPS_SMALL(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_multiplex_speed __attribute__((unused)), int32_t *_lat __attribute__((unused)), int32_t *_lon __attribute__((unused)), int16_t *_alt __attribute__((unused))) {}

#define DOWNLINK_SEND_I2C_ERRORS(_trans, _dev, wd_reset_cnt, queue_full_cnt, acknowledge_failure_cnt, misplaced_start_or_stop_cnt, arbitration_lost_cnt, overrun_or_underrun_cnt, pec_error_in_reception_cnt, timeout_or_tlow_error_cnt, smbus_alert_cnt, unexpected_event_cnt, last_unexpected_event, bus_number) {}
static inline void pprz_send_msg_I2C_ERRORS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint16_t *_wd_reset_cnt __attribute__((unused)), uint16_t *_queue_full_cnt __attribute__((unused)), uint16_t *_acknowledge_failure_cnt __attribute__((unused)), uint16_t *_misplaced_start_or_stop_cnt __attribute__((unused)), uint16_t *_arbitration_lost_cnt __attribute__((unused)), uint16_t *_overrun_or_underrun_cnt __attribute__((unused)), uint16_t *_pec_error_in_reception_cnt __attribute__((unused)), uint16_t *_timeout_or_tlow_error_cnt __attribute__((unused)), uint16_t *_smbus_alert_cnt __attribute__((unused)), uint16_t *_unexpected_event_cnt __attribute__((unused)), uint32_t *_last_unexpected_event __attribute__((unused)), uint8_t *_bus_number __attribute__((unused))) {}

#define DOWNLINK_SEND_RDYB_TRAJECTORY(_trans, _dev, commanded_phi, commanded_theta, commanded_psi, setpoint_x, setpoint_y, setpoint_z) {}
static inline void pprz_send_msg_RDYB_TRAJECTORY(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), float *_commanded_phi __attribute__((unused)), float *_commanded_theta __attribute__((unused)), float *_commanded_psi __attribute__((unused)), float *_setpoint_x __attribute__((unused)), float *_setpoint_y __attribute__((unused)), float *_setpoint_z __attribute__((unused))) {}

#define DOWNLINK_SEND_HENRY_GNSS(_trans, _dev, last_imu_update, GPS_time, GPS_solution_valid, latitude, longitude, altitude, North, East, Down, SVs_Tracked, SVs_PVT, V_North, V_East, V_Down) {}
static inline void pprz_send_msg_HENRY_GNSS(struct transport_tx *trans __attribute__((unused)), struct link_device *dev __attribute__((unused)), uint8_t ac_id __attribute__((unused)), uint32_t *_last_imu_update __attribute__((unused)), double *_GPS_time __attribute__((unused)), uint8_t *_GPS_solution_valid __attribute__((unused)), double *_latitude __attribute__((unused)), double *_longitude __attribute__((unused)), double *_altitude __attribute__((unused)), double *_North __attribute__((unused)), double *_East __attribute__((unused)), double *_Down __attribute__((unused)), uint8_t *_SVs_Tracked __attribute__((unused)), uint8_t *_SVs_PVT __attribute__((unused)), double *_V_North __attribute__((unused)), double *_V_East __attribute__((unused)), double *_V_Down __attribute__((unused))) {}

#endif // DOWNLINK

#define DL_AUTOPILOT_VERSION_version(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_AUTOPILOT_VERSION_desc_length(_payload) _PPRZ_VAL_uint8_t(_payload, 6)
#define DL_AUTOPILOT_VERSION_desc(_payload) _PPRZ_VAL_char_array(_payload, 7)

#define DL_ALIVE_md5sum_length(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_ALIVE_md5sum(_payload) _PPRZ_VAL_uint8_t_array(_payload, 3)



#define DL_TAKEOFF_cpu_time(_payload) _PPRZ_VAL_uint16_t(_payload, 2)

#define DL_ARDRONE_NAVDATA_taille(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_ARDRONE_NAVDATA_nu_trame(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_ARDRONE_NAVDATA_ax(_payload) _PPRZ_VAL_uint16_t(_payload, 6)
#define DL_ARDRONE_NAVDATA_ay(_payload) _PPRZ_VAL_uint16_t(_payload, 8)
#define DL_ARDRONE_NAVDATA_az(_payload) _PPRZ_VAL_uint16_t(_payload, 10)
#define DL_ARDRONE_NAVDATA_vx(_payload) _PPRZ_VAL_int16_t(_payload, 12)
#define DL_ARDRONE_NAVDATA_vy(_payload) _PPRZ_VAL_int16_t(_payload, 14)
#define DL_ARDRONE_NAVDATA_vz(_payload) _PPRZ_VAL_int16_t(_payload, 16)
#define DL_ARDRONE_NAVDATA_temperature_acc(_payload) _PPRZ_VAL_uint16_t(_payload, 18)
#define DL_ARDRONE_NAVDATA_temperature_gyro(_payload) _PPRZ_VAL_uint16_t(_payload, 20)
#define DL_ARDRONE_NAVDATA_ultrasound(_payload) _PPRZ_VAL_uint16_t(_payload, 22)
#define DL_ARDRONE_NAVDATA_us_debut_echo(_payload) _PPRZ_VAL_uint16_t(_payload, 24)
#define DL_ARDRONE_NAVDATA_us_fin_echo(_payload) _PPRZ_VAL_uint16_t(_payload, 26)
#define DL_ARDRONE_NAVDATA_us_association_echo(_payload) _PPRZ_VAL_uint16_t(_payload, 28)
#define DL_ARDRONE_NAVDATA_us_distance_echo(_payload) _PPRZ_VAL_uint16_t(_payload, 30)
#define DL_ARDRONE_NAVDATA_us_curve_time(_payload) _PPRZ_VAL_uint16_t(_payload, 32)
#define DL_ARDRONE_NAVDATA_us_curve_value(_payload) _PPRZ_VAL_uint16_t(_payload, 34)
#define DL_ARDRONE_NAVDATA_us_curve_ref(_payload) _PPRZ_VAL_uint16_t(_payload, 36)
#define DL_ARDRONE_NAVDATA_nb_echo(_payload) _PPRZ_VAL_uint16_t(_payload, 38)
#define DL_ARDRONE_NAVDATA_sum_echo(_payload) _PPRZ_VAL_uint32_t(_payload, 40)
#define DL_ARDRONE_NAVDATA_gradient(_payload) _PPRZ_VAL_int16_t(_payload, 44)
#define DL_ARDRONE_NAVDATA_flag_echo_ini(_payload) _PPRZ_VAL_uint16_t(_payload, 46)
#define DL_ARDRONE_NAVDATA_pressure(_payload) _PPRZ_VAL_int32_t(_payload, 48)
#define DL_ARDRONE_NAVDATA_temperature_pressure(_payload) _PPRZ_VAL_uint16_t(_payload, 52)
#define DL_ARDRONE_NAVDATA_mx(_payload) _PPRZ_VAL_int16_t(_payload, 54)
#define DL_ARDRONE_NAVDATA_my(_payload) _PPRZ_VAL_int16_t(_payload, 56)
#define DL_ARDRONE_NAVDATA_mz(_payload) _PPRZ_VAL_int16_t(_payload, 58)
#define DL_ARDRONE_NAVDATA_chksum(_payload) _PPRZ_VAL_uint16_t(_payload, 60)
#define DL_ARDRONE_NAVDATA_checksum_errors(_payload) _PPRZ_VAL_uint32_t(_payload, 62)

#define DL_ATTITUDE_phi(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_ATTITUDE_psi(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_ATTITUDE_theta(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_IR_SENSORS_ir1(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_IR_SENSORS_ir2(_payload) _PPRZ_VAL_int16_t(_payload, 4)
#define DL_IR_SENSORS_longitudinal(_payload) _PPRZ_VAL_int16_t(_payload, 6)
#define DL_IR_SENSORS_lateral(_payload) _PPRZ_VAL_int16_t(_payload, 8)
#define DL_IR_SENSORS_vertical(_payload) _PPRZ_VAL_int16_t(_payload, 10)

#define DL_GPS_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_GPS_utm_east(_payload) _PPRZ_VAL_int32_t(_payload, 3)
#define DL_GPS_utm_north(_payload) _PPRZ_VAL_int32_t(_payload, 7)
#define DL_GPS_course(_payload) _PPRZ_VAL_int16_t(_payload, 11)
#define DL_GPS_alt(_payload) _PPRZ_VAL_int32_t(_payload, 13)
#define DL_GPS_speed(_payload) _PPRZ_VAL_uint16_t(_payload, 17)
#define DL_GPS_climb(_payload) _PPRZ_VAL_int16_t(_payload, 19)
#define DL_GPS_week(_payload) _PPRZ_VAL_uint16_t(_payload, 21)
#define DL_GPS_itow(_payload) _PPRZ_VAL_uint32_t(_payload, 23)
#define DL_GPS_utm_zone(_payload) _PPRZ_VAL_uint8_t(_payload, 27)
#define DL_GPS_gps_nb_err(_payload) _PPRZ_VAL_uint8_t(_payload, 28)

#define DL_NAVIGATION_REF_utm_east(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_NAVIGATION_REF_utm_north(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_NAVIGATION_REF_utm_zone(_payload) _PPRZ_VAL_uint8_t(_payload, 10)
#define DL_NAVIGATION_REF_ground_alt(_payload) _PPRZ_VAL_float(_payload, 11)

#define DL_NAVIGATION_cur_block(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_NAVIGATION_cur_stage(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_NAVIGATION_pos_x(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_NAVIGATION_pos_y(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_NAVIGATION_dist_wp(_payload) _PPRZ_VAL_float(_payload, 12)
#define DL_NAVIGATION_dist_home(_payload) _PPRZ_VAL_float(_payload, 16)
#define DL_NAVIGATION_circle_count(_payload) _PPRZ_VAL_uint8_t(_payload, 20)
#define DL_NAVIGATION_oval_count(_payload) _PPRZ_VAL_uint8_t(_payload, 21)

#define DL_PPRZ_MODE_ap_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_PPRZ_MODE_ap_gaz(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_PPRZ_MODE_ap_lateral(_payload) _PPRZ_VAL_uint8_t(_payload, 4)
#define DL_PPRZ_MODE_ap_horizontal(_payload) _PPRZ_VAL_uint8_t(_payload, 5)
#define DL_PPRZ_MODE_if_calib_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 6)
#define DL_PPRZ_MODE_mcu1_status(_payload) _PPRZ_VAL_uint8_t(_payload, 7)

#define DL_BAT_throttle(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_BAT_voltage(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_BAT_amps(_payload) _PPRZ_VAL_int16_t(_payload, 6)
#define DL_BAT_flight_time(_payload) _PPRZ_VAL_uint16_t(_payload, 8)
#define DL_BAT_kill_auto_throttle(_payload) _PPRZ_VAL_uint8_t(_payload, 10)
#define DL_BAT_block_time(_payload) _PPRZ_VAL_uint16_t(_payload, 11)
#define DL_BAT_stage_time(_payload) _PPRZ_VAL_uint16_t(_payload, 13)
#define DL_BAT_energy(_payload) _PPRZ_VAL_int16_t(_payload, 15)

#define DL_DEBUG_MCU_LINK_i2c_nb_err(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_DEBUG_MCU_LINK_i2c_mcu1_nb_err(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_DEBUG_MCU_LINK_ppm_rate(_payload) _PPRZ_VAL_uint8_t(_payload, 4)

#define DL_CALIBRATION_climb_sum_err(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_CALIBRATION_climb_gaz_submode(_payload) _PPRZ_VAL_uint8_t(_payload, 6)

#define DL_SETTINGS_slider_1_val(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_SETTINGS_slider_2_val(_payload) _PPRZ_VAL_float(_payload, 6)

#define DL_DESIRED_roll(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_DESIRED_pitch(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_DESIRED_course(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_DESIRED_x(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_DESIRED_y(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_DESIRED_altitude(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_DESIRED_climb(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_DESIRED_airspeed(_payload) _PPRZ_VAL_float(_payload, 30)

#define DL_GPS_SOL_Pacc(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_GPS_SOL_Sacc(_payload) _PPRZ_VAL_uint32_t(_payload, 6)
#define DL_GPS_SOL_PDOP(_payload) _PPRZ_VAL_uint16_t(_payload, 10)
#define DL_GPS_SOL_numSV(_payload) _PPRZ_VAL_uint8_t(_payload, 12)

#define DL_ADC_GENERIC_val1(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_ADC_GENERIC_val2(_payload) _PPRZ_VAL_uint16_t(_payload, 4)

#define DL_TEST_FORMAT_val1(_payload) _PPRZ_VAL_double(_payload, 2)
#define DL_TEST_FORMAT_val2(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_CAM_phi(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_CAM_theta(_payload) _PPRZ_VAL_int16_t(_payload, 4)
#define DL_CAM_target_x(_payload) _PPRZ_VAL_int16_t(_payload, 6)
#define DL_CAM_target_y(_payload) _PPRZ_VAL_int16_t(_payload, 8)

#define DL_CIRCLE_center_east(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_CIRCLE_center_north(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_CIRCLE_radius(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_SEGMENT_segment_east_1(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_SEGMENT_segment_north_1(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_SEGMENT_segment_east_2(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_SEGMENT_segment_north_2(_payload) _PPRZ_VAL_float(_payload, 14)

#define DL_VECTORNAV_INFO_timestamp(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_VECTORNAV_INFO_chksm_error(_payload) _PPRZ_VAL_uint32_t(_payload, 6)
#define DL_VECTORNAV_INFO_hdr_error(_payload) _PPRZ_VAL_uint32_t(_payload, 10)
#define DL_VECTORNAV_INFO_counter(_payload) _PPRZ_VAL_uint16_t(_payload, 14)
#define DL_VECTORNAV_INFO_ins_status(_payload) _PPRZ_VAL_uint8_t(_payload, 16)
#define DL_VECTORNAV_INFO_ins_err(_payload) _PPRZ_VAL_uint8_t(_payload, 17)
#define DL_VECTORNAV_INFO_YprU1(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_VECTORNAV_INFO_YprU2(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_VECTORNAV_INFO_YprU3(_payload) _PPRZ_VAL_float(_payload, 26)

#define DL_HYBRID_GUIDANCE_pos_x(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_HYBRID_GUIDANCE_pos_y(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_HYBRID_GUIDANCE_speed_x(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_HYBRID_GUIDANCE_speed_y(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_HYBRID_GUIDANCE_wind_x(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_HYBRID_GUIDANCE_wind_y(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_HYBRID_GUIDANCE_pos_err_x(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_HYBRID_GUIDANCE_pos_err_y(_payload) _PPRZ_VAL_int32_t(_payload, 30)
#define DL_HYBRID_GUIDANCE_speed_sp_x(_payload) _PPRZ_VAL_int32_t(_payload, 34)
#define DL_HYBRID_GUIDANCE_speed_sp_y(_payload) _PPRZ_VAL_int32_t(_payload, 38)
#define DL_HYBRID_GUIDANCE_norm_ref_speed(_payload) _PPRZ_VAL_int32_t(_payload, 42)
#define DL_HYBRID_GUIDANCE_heading_diff(_payload) _PPRZ_VAL_int32_t(_payload, 46)
#define DL_HYBRID_GUIDANCE_phi(_payload) _PPRZ_VAL_int32_t(_payload, 50)
#define DL_HYBRID_GUIDANCE_theta(_payload) _PPRZ_VAL_int32_t(_payload, 54)
#define DL_HYBRID_GUIDANCE_psi(_payload) _PPRZ_VAL_int32_t(_payload, 58)

#define DL_SVINFO_chn(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_SVINFO_SVID(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_SVINFO_Flags(_payload) _PPRZ_VAL_uint8_t(_payload, 4)
#define DL_SVINFO_QI(_payload) _PPRZ_VAL_uint8_t(_payload, 5)
#define DL_SVINFO_CNO(_payload) _PPRZ_VAL_uint8_t(_payload, 6)
#define DL_SVINFO_Elev(_payload) _PPRZ_VAL_int8_t(_payload, 7)
#define DL_SVINFO_Azim(_payload) _PPRZ_VAL_int16_t(_payload, 8)

#define DL_DEBUG_msg_length(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_DEBUG_msg(_payload) _PPRZ_VAL_uint8_t_array(_payload, 3)

#define DL_SURVEY_east(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_SURVEY_north(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_SURVEY_west(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_SURVEY_south(_payload) _PPRZ_VAL_float(_payload, 14)

#define DL_RSSI_rssi(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_RSSI_tx_power(_payload) _PPRZ_VAL_uint8_t(_payload, 3)

#define DL_RANGEFINDER_range(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_RANGEFINDER_z_dot(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_RANGEFINDER_z_dot_sum_err(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_RANGEFINDER_z_dot_setpoint(_payload) _PPRZ_VAL_float(_payload, 12)
#define DL_RANGEFINDER_z_sum_err(_payload) _PPRZ_VAL_float(_payload, 16)
#define DL_RANGEFINDER_z_setpoint(_payload) _PPRZ_VAL_float(_payload, 20)
#define DL_RANGEFINDER_flying(_payload) _PPRZ_VAL_uint8_t(_payload, 24)

#define DL_DATALINK_REPORT_uplink_lost_time(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_DATALINK_REPORT_uplink_nb_msgs(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_DATALINK_REPORT_downlink_nb_msgs(_payload) _PPRZ_VAL_uint16_t(_payload, 6)
#define DL_DATALINK_REPORT_downlink_rate(_payload) _PPRZ_VAL_uint16_t(_payload, 8)
#define DL_DATALINK_REPORT_uplink_rate(_payload) _PPRZ_VAL_uint16_t(_payload, 10)
#define DL_DATALINK_REPORT_downlink_ovrn(_payload) _PPRZ_VAL_uint8_t(_payload, 12)

#define DL_DL_VALUE_index(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_DL_VALUE_value(_payload) _PPRZ_VAL_float(_payload, 3)

#define DL_MARK_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_MARK_lat(_payload) _PPRZ_VAL_float(_payload, 3)
#define DL_MARK_long(_payload) _PPRZ_VAL_float(_payload, 7)

#define DL_SYS_MON_periodic_time(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_SYS_MON_periodic_time_min(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_SYS_MON_periodic_time_max(_payload) _PPRZ_VAL_uint16_t(_payload, 6)
#define DL_SYS_MON_periodic_cycle(_payload) _PPRZ_VAL_uint16_t(_payload, 8)
#define DL_SYS_MON_periodic_cycle_min(_payload) _PPRZ_VAL_uint16_t(_payload, 10)
#define DL_SYS_MON_periodic_cycle_max(_payload) _PPRZ_VAL_uint16_t(_payload, 12)
#define DL_SYS_MON_event_number(_payload) _PPRZ_VAL_uint16_t(_payload, 14)
#define DL_SYS_MON_cpu_load(_payload) _PPRZ_VAL_uint8_t(_payload, 16)

#define DL_MOTOR_rpm(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_MOTOR_current(_payload) _PPRZ_VAL_int32_t(_payload, 4)

#define DL_WP_MOVED_wp_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_WP_MOVED_utm_east(_payload) _PPRZ_VAL_float(_payload, 3)
#define DL_WP_MOVED_utm_north(_payload) _PPRZ_VAL_float(_payload, 7)
#define DL_WP_MOVED_alt(_payload) _PPRZ_VAL_float(_payload, 11)
#define DL_WP_MOVED_utm_zone(_payload) _PPRZ_VAL_uint8_t(_payload, 15)

#define DL_MKK_nr(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_MKK_rpm(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_MKK_current(_payload) _PPRZ_VAL_uint8_t(_payload, 4)
#define DL_MKK_temp(_payload) _PPRZ_VAL_int8_t(_payload, 5)

#define DL_ENERGY_bat(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_ENERGY_amp(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_ENERGY_energy(_payload) _PPRZ_VAL_uint16_t(_payload, 10)
#define DL_ENERGY_power(_payload) _PPRZ_VAL_float(_payload, 12)

#define DL_WALDO_MSG_roll(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_WALDO_MSG_yaw(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_WALDO_MSG_pitch(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_WALDO_MSG_fix(_payload) _PPRZ_VAL_uint8_t(_payload, 14)
#define DL_WALDO_MSG_utm_east(_payload) _PPRZ_VAL_int32_t(_payload, 15)
#define DL_WALDO_MSG_utm_north(_payload) _PPRZ_VAL_int32_t(_payload, 19)
#define DL_WALDO_MSG_utm_zone(_payload) _PPRZ_VAL_uint8_t(_payload, 23)
#define DL_WALDO_MSG_speed(_payload) _PPRZ_VAL_uint16_t(_payload, 24)
#define DL_WALDO_MSG_week(_payload) _PPRZ_VAL_uint16_t(_payload, 26)
#define DL_WALDO_MSG_itow(_payload) _PPRZ_VAL_uint32_t(_payload, 28)
#define DL_WALDO_MSG_est_height(_payload) _PPRZ_VAL_float(_payload, 32)

#define DL_WALDO_DEBUG_MSG_countupfast(_payload) _PPRZ_VAL_float(_payload, 2)

#define DL_SPEED_LOOP_ve_set_point(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_SPEED_LOOP_ve(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_SPEED_LOOP_vn_set_point(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_SPEED_LOOP_vn(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_SPEED_LOOP_north_sp(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_SPEED_LOOP_east_sp(_payload) _PPRZ_VAL_float(_payload, 22)

#define DL_ALT_KALMAN_p00(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_ALT_KALMAN_p01(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_ALT_KALMAN_p10(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_ALT_KALMAN_p11(_payload) _PPRZ_VAL_float(_payload, 14)

#define DL_ESTIMATOR_z(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_ESTIMATOR_z_dot(_payload) _PPRZ_VAL_float(_payload, 6)

#define DL_TUNE_ROLL_p(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_TUNE_ROLL_phi(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_TUNE_ROLL_phi_sp(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_BARO_MS5534A_pressure(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_BARO_MS5534A_temp(_payload) _PPRZ_VAL_uint16_t(_payload, 6)
#define DL_BARO_MS5534A_alt(_payload) _PPRZ_VAL_float(_payload, 8)

#define DL_PRESSURE_airspeed_adc(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_PRESSURE_airspeed(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_PRESSURE_altitude_adc(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_PRESSURE_altitude(_payload) _PPRZ_VAL_float(_payload, 14)

#define DL_BARO_WORDS_w1(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_BARO_WORDS_w2(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_BARO_WORDS_w3(_payload) _PPRZ_VAL_uint16_t(_payload, 6)
#define DL_BARO_WORDS_w4(_payload) _PPRZ_VAL_uint16_t(_payload, 8)

#define DL_WP_MOVED_LLA_wp_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_WP_MOVED_LLA_lat(_payload) _PPRZ_VAL_int32_t(_payload, 3)
#define DL_WP_MOVED_LLA_lon(_payload) _PPRZ_VAL_int32_t(_payload, 7)
#define DL_WP_MOVED_LLA_alt(_payload) _PPRZ_VAL_int32_t(_payload, 11)

#define DL_CHRONO_tag(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_CHRONO_time(_payload) _PPRZ_VAL_uint32_t(_payload, 3)

#define DL_WP_MOVED_ENU_wp_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_WP_MOVED_ENU_east(_payload) _PPRZ_VAL_int32_t(_payload, 3)
#define DL_WP_MOVED_ENU_north(_payload) _PPRZ_VAL_int32_t(_payload, 7)
#define DL_WP_MOVED_ENU_up(_payload) _PPRZ_VAL_int32_t(_payload, 11)

#define DL_WINDTURBINE_STATUS__ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_WINDTURBINE_STATUS__tb_id(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_WINDTURBINE_STATUS__sync_itow(_payload) _PPRZ_VAL_uint32_t(_payload, 4)
#define DL_WINDTURBINE_STATUS__cycle_time(_payload) _PPRZ_VAL_uint32_t(_payload, 8)

#define DL_RC_3CH__throttle_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_RC_3CH__roll(_payload) _PPRZ_VAL_int8_t(_payload, 3)
#define DL_RC_3CH__pitch(_payload) _PPRZ_VAL_int8_t(_payload, 4)

#define DL_MPPT_values_length(_payload) _PPRZ_VAL_len_aligned(_payload, 2)
#define DL_MPPT_values(_payload) _PPRZ_VAL_int16_t_array(_payload, 3)

#define DL_DEBUG_IR_I2C_ir1(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_DEBUG_IR_I2C_ir2(_payload) _PPRZ_VAL_int16_t(_payload, 4)
#define DL_DEBUG_IR_I2C_top(_payload) _PPRZ_VAL_int16_t(_payload, 6)

#define DL_AIRSPEED_airspeed(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_AIRSPEED_airspeed_sp(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_AIRSPEED_airspeed_cnt(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_AIRSPEED_groundspeed_sp(_payload) _PPRZ_VAL_float(_payload, 14)

#define DL_XSENS_counter(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_XSENS_p(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_XSENS_q(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_XSENS_r(_payload) _PPRZ_VAL_float(_payload, 12)
#define DL_XSENS_phi(_payload) _PPRZ_VAL_float(_payload, 16)
#define DL_XSENS_theta(_payload) _PPRZ_VAL_float(_payload, 20)
#define DL_XSENS_psi(_payload) _PPRZ_VAL_float(_payload, 24)
#define DL_XSENS_ax(_payload) _PPRZ_VAL_float(_payload, 28)
#define DL_XSENS_ay(_payload) _PPRZ_VAL_float(_payload, 32)
#define DL_XSENS_az(_payload) _PPRZ_VAL_float(_payload, 36)
#define DL_XSENS_vx(_payload) _PPRZ_VAL_float(_payload, 40)
#define DL_XSENS_vy(_payload) _PPRZ_VAL_float(_payload, 44)
#define DL_XSENS_vz(_payload) _PPRZ_VAL_float(_payload, 48)
#define DL_XSENS_lat(_payload) _PPRZ_VAL_float(_payload, 52)
#define DL_XSENS_lon(_payload) _PPRZ_VAL_float(_payload, 56)
#define DL_XSENS_alt(_payload) _PPRZ_VAL_float(_payload, 60)
#define DL_XSENS_status(_payload) _PPRZ_VAL_uint8_t(_payload, 64)
#define DL_XSENS_hour(_payload) _PPRZ_VAL_uint8_t(_payload, 65)
#define DL_XSENS_min(_payload) _PPRZ_VAL_uint8_t(_payload, 66)
#define DL_XSENS_sec(_payload) _PPRZ_VAL_uint8_t(_payload, 67)
#define DL_XSENS_nanosec(_payload) _PPRZ_VAL_uint32_t(_payload, 68)
#define DL_XSENS_year(_payload) _PPRZ_VAL_uint16_t(_payload, 72)
#define DL_XSENS_month(_payload) _PPRZ_VAL_uint8_t(_payload, 74)
#define DL_XSENS_day(_payload) _PPRZ_VAL_uint8_t(_payload, 75)

#define DL_BARO_ETS_adc(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_BARO_ETS_offset(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_BARO_ETS_scaled(_payload) _PPRZ_VAL_float(_payload, 6)

#define DL_AIRSPEED_ETS_adc(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_AIRSPEED_ETS_offset(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_AIRSPEED_ETS_scaled(_payload) _PPRZ_VAL_float(_payload, 6)

#define DL_PBN_airspeed_adc(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_PBN_altitude_adc(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_PBN_airspeed(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_PBN_altitude(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_PBN_airspeed_offset(_payload) _PPRZ_VAL_uint16_t(_payload, 14)
#define DL_PBN_altitude_offset(_payload) _PPRZ_VAL_uint16_t(_payload, 16)

#define DL_GPS_LLA_lat(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_GPS_LLA_lon(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_GPS_LLA_alt(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_GPS_LLA_hmsl(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_GPS_LLA_course(_payload) _PPRZ_VAL_int16_t(_payload, 18)
#define DL_GPS_LLA_speed(_payload) _PPRZ_VAL_uint16_t(_payload, 20)
#define DL_GPS_LLA_climb(_payload) _PPRZ_VAL_int16_t(_payload, 22)
#define DL_GPS_LLA_week(_payload) _PPRZ_VAL_uint16_t(_payload, 24)
#define DL_GPS_LLA_itow(_payload) _PPRZ_VAL_uint32_t(_payload, 26)
#define DL_GPS_LLA_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 30)
#define DL_GPS_LLA_gps_nb_err(_payload) _PPRZ_VAL_uint8_t(_payload, 31)

#define DL_H_CTL_A_roll_sum_err(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_H_CTL_A_roll_sp(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_H_CTL_A_roll_ref(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_H_CTL_A_phi(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_H_CTL_A_aileron_sp(_payload) _PPRZ_VAL_int16_t(_payload, 18)
#define DL_H_CTL_A_pitch_sum_err(_payload) _PPRZ_VAL_float(_payload, 20)
#define DL_H_CTL_A_pitch_sp(_payload) _PPRZ_VAL_float(_payload, 24)
#define DL_H_CTL_A_pitch_ref(_payload) _PPRZ_VAL_float(_payload, 28)
#define DL_H_CTL_A_theta(_payload) _PPRZ_VAL_float(_payload, 32)
#define DL_H_CTL_A_elevator_sp(_payload) _PPRZ_VAL_int16_t(_payload, 36)

#define DL_TURB_PRESSURE_RAW_ch_0(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_TURB_PRESSURE_RAW_ch_1(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_TURB_PRESSURE_RAW_ch_2(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_TURB_PRESSURE_RAW_ch_3(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_TURB_PRESSURE_RAW_ch_4(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_TURB_PRESSURE_RAW_ch_5(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_TURB_PRESSURE_RAW_ch_6(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_TURB_PRESSURE_RAW_ch_7(_payload) _PPRZ_VAL_int32_t(_payload, 30)
#define DL_TURB_PRESSURE_RAW_ch_8(_payload) _PPRZ_VAL_int32_t(_payload, 34)
#define DL_TURB_PRESSURE_RAW_ch_9(_payload) _PPRZ_VAL_int32_t(_payload, 38)
#define DL_TURB_PRESSURE_RAW_ch_10(_payload) _PPRZ_VAL_int32_t(_payload, 42)
#define DL_TURB_PRESSURE_RAW_ch_11(_payload) _PPRZ_VAL_int32_t(_payload, 46)
#define DL_TURB_PRESSURE_RAW_ch_12(_payload) _PPRZ_VAL_int32_t(_payload, 50)
#define DL_TURB_PRESSURE_RAW_ch_13(_payload) _PPRZ_VAL_int32_t(_payload, 54)
#define DL_TURB_PRESSURE_RAW_ch_14(_payload) _PPRZ_VAL_int32_t(_payload, 58)
#define DL_TURB_PRESSURE_RAW_ch_15(_payload) _PPRZ_VAL_int32_t(_payload, 62)

#define DL_TURB_PRESSURE_VOLTAGE_ch_1_p(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_TURB_PRESSURE_VOLTAGE_ch_1_t(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_TURB_PRESSURE_VOLTAGE_ch_2_p(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_TURB_PRESSURE_VOLTAGE_ch_2_t(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_TURB_PRESSURE_VOLTAGE_ch_3_p(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_TURB_PRESSURE_VOLTAGE_ch_3_t(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_TURB_PRESSURE_VOLTAGE_ch_4_p(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_TURB_PRESSURE_VOLTAGE_ch_4_t(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_TURB_PRESSURE_VOLTAGE_ch_5_p(_payload) _PPRZ_VAL_float(_payload, 34)
#define DL_TURB_PRESSURE_VOLTAGE_ch_5_t(_payload) _PPRZ_VAL_float(_payload, 38)
#define DL_TURB_PRESSURE_VOLTAGE_ch_6_p(_payload) _PPRZ_VAL_float(_payload, 42)
#define DL_TURB_PRESSURE_VOLTAGE_ch_6_t(_payload) _PPRZ_VAL_float(_payload, 46)
#define DL_TURB_PRESSURE_VOLTAGE_ch_7_p(_payload) _PPRZ_VAL_float(_payload, 50)
#define DL_TURB_PRESSURE_VOLTAGE_ch_7_t(_payload) _PPRZ_VAL_float(_payload, 54)
#define DL_TURB_PRESSURE_VOLTAGE_gnd1(_payload) _PPRZ_VAL_float(_payload, 58)
#define DL_TURB_PRESSURE_VOLTAGE_gnd2(_payload) _PPRZ_VAL_float(_payload, 62)

#define DL_CAM_POINT_cam_point_distance_from_home(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_CAM_POINT_cam_point_lat(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_CAM_POINT_cam_point_lon(_payload) _PPRZ_VAL_float(_payload, 8)

#define DL_DC_INFO_mode(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_DC_INFO_lat(_payload) _PPRZ_VAL_int32_t(_payload, 4)
#define DL_DC_INFO_lon(_payload) _PPRZ_VAL_int32_t(_payload, 8)
#define DL_DC_INFO_alt(_payload) _PPRZ_VAL_int32_t(_payload, 12)
#define DL_DC_INFO_course(_payload) _PPRZ_VAL_float(_payload, 16)
#define DL_DC_INFO_photo_nr(_payload) _PPRZ_VAL_uint16_t(_payload, 20)
#define DL_DC_INFO_dist(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_DC_INFO_next_dist(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_DC_INFO_start_x(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_DC_INFO_start_y(_payload) _PPRZ_VAL_float(_payload, 34)
#define DL_DC_INFO_start_angle(_payload) _PPRZ_VAL_float(_payload, 38)
#define DL_DC_INFO_angle(_payload) _PPRZ_VAL_float(_payload, 42)
#define DL_DC_INFO_last_block(_payload) _PPRZ_VAL_float(_payload, 46)
#define DL_DC_INFO_count(_payload) _PPRZ_VAL_uint16_t(_payload, 50)
#define DL_DC_INFO_shutter(_payload) _PPRZ_VAL_uint8_t(_payload, 52)

#define DL_AMSYS_BARO_pBaroRaw(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_AMSYS_BARO_pBaro(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_AMSYS_BARO_pHomePressure(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_AMSYS_BARO_AltOffset(_payload) _PPRZ_VAL_float(_payload, 12)
#define DL_AMSYS_BARO_aktuell(_payload) _PPRZ_VAL_float(_payload, 16)
#define DL_AMSYS_BARO_Over_Ground(_payload) _PPRZ_VAL_float(_payload, 20)
#define DL_AMSYS_BARO_tempBaro(_payload) _PPRZ_VAL_float(_payload, 24)

#define DL_AMSYS_AIRSPEED_asRaw(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_AMSYS_AIRSPEED_asPresure(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_AMSYS_AIRSPEED_asAirspeed(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_AMSYS_AIRSPEED_asAirsFilt(_payload) _PPRZ_VAL_float(_payload, 12)
#define DL_AMSYS_AIRSPEED_asTemp(_payload) _PPRZ_VAL_float(_payload, 16)

#define DL_FLIGHT_BENCHMARK_SE_As(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_FLIGHT_BENCHMARK_SE_Alt(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_FLIGHT_BENCHMARK_SE_Pos(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_FLIGHT_BENCHMARK_Err_As(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_FLIGHT_BENCHMARK_Err_Alt(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_FLIGHT_BENCHMARK_Err_Pos(_payload) _PPRZ_VAL_float(_payload, 22)

#define DL_MPL3115_BARO_pressure(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_MPL3115_BARO_temp(_payload) _PPRZ_VAL_int16_t(_payload, 6)
#define DL_MPL3115_BARO_alt(_payload) _PPRZ_VAL_float(_payload, 8)

#define DL_AOA_raw(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_AOA_angle(_payload) _PPRZ_VAL_float(_payload, 6)

#define DL_XTEND_RSSI_datalink_time(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_XTEND_RSSI_rssi_fade_margin(_payload) _PPRZ_VAL_uint8_t(_payload, 4)
#define DL_XTEND_RSSI_duty(_payload) _PPRZ_VAL_uint8_t(_payload, 5)

#define DL_SUPERBITRF_status(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_SUPERBITRF_cyrf_status(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_SUPERBITRF_irq_count(_payload) _PPRZ_VAL_uint32_t(_payload, 4)
#define DL_SUPERBITRF_rx_packet_count(_payload) _PPRZ_VAL_uint32_t(_payload, 8)
#define DL_SUPERBITRF_tx_packet_count(_payload) _PPRZ_VAL_uint32_t(_payload, 12)
#define DL_SUPERBITRF_transfer_timeouts(_payload) _PPRZ_VAL_uint32_t(_payload, 16)
#define DL_SUPERBITRF_resync_count(_payload) _PPRZ_VAL_uint32_t(_payload, 20)
#define DL_SUPERBITRF_uplink_count(_payload) _PPRZ_VAL_uint32_t(_payload, 24)
#define DL_SUPERBITRF_rc_count(_payload) _PPRZ_VAL_uint32_t(_payload, 28)
#define DL_SUPERBITRF_timing1(_payload) _PPRZ_VAL_uint32_t(_payload, 32)
#define DL_SUPERBITRF_timing2(_payload) _PPRZ_VAL_uint32_t(_payload, 36)
#define DL_SUPERBITRF_bind_mfg_id(_payload) _PPRZ_VAL_uint32_t(_payload, 40)
#define DL_SUPERBITRF_mfg_id_length(_payload) _PPRZ_VAL_uint8_t(_payload, 44)
#define DL_SUPERBITRF_mfg_id(_payload) _PPRZ_VAL_uint8_t_array(_payload, 45)

#define DL_GX3_INFO_GX3_freq(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_GX3_INFO_chksm_error(_payload) _PPRZ_VAL_uint32_t(_payload, 6)
#define DL_GX3_INFO_hdr_error(_payload) _PPRZ_VAL_uint32_t(_payload, 10)
#define DL_GX3_INFO_GX3_chksm(_payload) _PPRZ_VAL_uint16_t(_payload, 14)

#define DL_EXPLAIN_type(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_EXPLAIN_id(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_EXPLAIN_string_length(_payload) _PPRZ_VAL_uint8_t(_payload, 4)
#define DL_EXPLAIN_string(_payload) _PPRZ_VAL_uint8_t_array(_payload, 5)

#define DL_VIDEO_TELEMETRY_blob_x1(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_VIDEO_TELEMETRY_blob_y1(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_VIDEO_TELEMETRY_blob_x2(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_VIDEO_TELEMETRY_blob_y2(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_VIDEO_TELEMETRY_blob_x3(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_VIDEO_TELEMETRY_blob_y3(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_VIDEO_TELEMETRY_blob_x4(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_VIDEO_TELEMETRY_blob_y4(_payload) _PPRZ_VAL_int32_t(_payload, 30)

#define DL_VF_UPDATE_baro(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_VF_UPDATE_range_meter(_payload) _PPRZ_VAL_float(_payload, 6)

#define DL_VF_PREDICT_accel(_payload) _PPRZ_VAL_float(_payload, 2)

#define DL_INV_FILTER_quat(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_INV_FILTER_phi_inv(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_INV_FILTER_theta_inv(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_INV_FILTER_psi_inv(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_INV_FILTER_Vx_inv(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_INV_FILTER_Vy_inv(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_INV_FILTER_Vz_inv(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_INV_FILTER_Px_inv(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_INV_FILTER_Py_inv(_payload) _PPRZ_VAL_float(_payload, 34)
#define DL_INV_FILTER_Pz_inv(_payload) _PPRZ_VAL_float(_payload, 38)
#define DL_INV_FILTER_bias_phi(_payload) _PPRZ_VAL_float(_payload, 42)
#define DL_INV_FILTER_bias_theta(_payload) _PPRZ_VAL_float(_payload, 46)
#define DL_INV_FILTER_bias_psi(_payload) _PPRZ_VAL_float(_payload, 50)
#define DL_INV_FILTER_bias_as(_payload) _PPRZ_VAL_float(_payload, 54)
#define DL_INV_FILTER_bias_hb(_payload) _PPRZ_VAL_float(_payload, 58)
#define DL_INV_FILTER_meas_baro(_payload) _PPRZ_VAL_float(_payload, 62)
#define DL_INV_FILTER_meas_gps(_payload) _PPRZ_VAL_float(_payload, 66)

#define DL_MISSION_STATUS_remaining_time(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_MISSION_STATUS_task_list_length(_payload) _PPRZ_VAL_uint8_t(_payload, 6)
#define DL_MISSION_STATUS_task_list(_payload) _PPRZ_VAL_uint8_t_array(_payload, 7)

#define DL_CROSS_TRACK_ERROR_cross_track_error(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_CROSS_TRACK_ERROR_cte_int(_payload) _PPRZ_VAL_float(_payload, 6)

#define DL_GENERIC_COM_lat(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_GENERIC_COM_lon(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_GENERIC_COM_alt(_payload) _PPRZ_VAL_int16_t(_payload, 10)
#define DL_GENERIC_COM_gspeed(_payload) _PPRZ_VAL_uint16_t(_payload, 12)
#define DL_GENERIC_COM_course(_payload) _PPRZ_VAL_int16_t(_payload, 14)
#define DL_GENERIC_COM_airspeed(_payload) _PPRZ_VAL_uint16_t(_payload, 16)
#define DL_GENERIC_COM_vsupply(_payload) _PPRZ_VAL_uint8_t(_payload, 18)
#define DL_GENERIC_COM_energy(_payload) _PPRZ_VAL_uint8_t(_payload, 19)
#define DL_GENERIC_COM_throttle(_payload) _PPRZ_VAL_uint8_t(_payload, 20)
#define DL_GENERIC_COM_ap_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 21)
#define DL_GENERIC_COM_nav_block(_payload) _PPRZ_VAL_uint8_t(_payload, 22)
#define DL_GENERIC_COM_flight_time(_payload) _PPRZ_VAL_uint16_t(_payload, 23)

#define DL_FORMATION_SLOT_TM_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_FORMATION_SLOT_TM_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_FORMATION_SLOT_TM_slot_east(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_FORMATION_SLOT_TM_slot_north(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_FORMATION_SLOT_TM_slot_alt(_payload) _PPRZ_VAL_float(_payload, 12)

#define DL_FORMATION_STATUS_TM_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_FORMATION_STATUS_TM_leader_id(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_FORMATION_STATUS_TM_status(_payload) _PPRZ_VAL_uint8_t(_payload, 4)

#define DL_BMP_STATUS_UP(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_BMP_STATUS_UT(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_BMP_STATUS_press(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_BMP_STATUS_temp(_payload) _PPRZ_VAL_int32_t(_payload, 14)

#define DL_MLX_STATUS_itemp_case(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_MLX_STATUS_temp_case(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_MLX_STATUS_itemp_obj(_payload) _PPRZ_VAL_uint16_t(_payload, 8)
#define DL_MLX_STATUS_temp_obj(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_TMP_STATUS_itemp(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_TMP_STATUS_temp(_payload) _PPRZ_VAL_float(_payload, 4)

#define DL_WIND_INFO_RET_flags(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_WIND_INFO_RET_east(_payload) _PPRZ_VAL_float(_payload, 3)
#define DL_WIND_INFO_RET_north(_payload) _PPRZ_VAL_float(_payload, 7)
#define DL_WIND_INFO_RET_up(_payload) _PPRZ_VAL_float(_payload, 11)
#define DL_WIND_INFO_RET_airspeed(_payload) _PPRZ_VAL_float(_payload, 15)

#define DL_SCP_STATUS_press(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_SCP_STATUS_temp(_payload) _PPRZ_VAL_int16_t(_payload, 6)

#define DL_SHT_STATUS_ihumid(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_SHT_STATUS_itemp(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_SHT_STATUS_humid(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_SHT_STATUS_temp(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_ENOSE_STATUS_val1(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_ENOSE_STATUS_val2(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_ENOSE_STATUS_val3(_payload) _PPRZ_VAL_uint16_t(_payload, 6)
#define DL_ENOSE_STATUS_PID(_payload) _PPRZ_VAL_uint16_t(_payload, 8)
#define DL_ENOSE_STATUS_heat_length(_payload) _PPRZ_VAL_uint8_t(_payload, 10)
#define DL_ENOSE_STATUS_heat(_payload) _PPRZ_VAL_uint8_t_array(_payload, 11)

#define DL_DPICCO_STATUS_humid(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_DPICCO_STATUS_temp(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_DPICCO_STATUS_fhumid(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_DPICCO_STATUS_ftemp(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_ANTENNA_DEBUG_mag_xraw(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_ANTENNA_DEBUG_mag_yraw(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_ANTENNA_DEBUG_mag_xcal(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_ANTENNA_DEBUG_mag_ycal(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_ANTENNA_DEBUG_mag_heading(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_ANTENNA_DEBUG_mag_magnitude(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_ANTENNA_DEBUG_mag_temp(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_ANTENNA_DEBUG_mag_distor(_payload) _PPRZ_VAL_uint8_t(_payload, 30)
#define DL_ANTENNA_DEBUG_mag_cal_status(_payload) _PPRZ_VAL_uint8_t(_payload, 31)

#define DL_ANTENNA_STATUS_azim_sp(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_ANTENNA_STATUS_elev_sp(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_ANTENNA_STATUS_id_sp(_payload) _PPRZ_VAL_uint8_t(_payload, 10)
#define DL_ANTENNA_STATUS_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 11)

#define DL_MOTOR_BENCH_STATUS_time_ticks(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_MOTOR_BENCH_STATUS_throttle(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_MOTOR_BENCH_STATUS_rpm(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_MOTOR_BENCH_STATUS_current(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_MOTOR_BENCH_STATUS_thrust(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_MOTOR_BENCH_STATUS_torque(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_MOTOR_BENCH_STATUS_time_s(_payload) _PPRZ_VAL_uint16_t(_payload, 26)
#define DL_MOTOR_BENCH_STATUS_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 28)

#define DL_MOTOR_BENCH_STATIC_av_rpm(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_MOTOR_BENCH_STATIC_av_thrust(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_MOTOR_BENCH_STATIC_av_current(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_MOTOR_BENCH_STATIC_throttle(_payload) _PPRZ_VAL_uint16_t(_payload, 14)

#define DL_HIH_STATUS_humid(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_HIH_STATUS_fhumid(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_HIH_STATUS_ftemp(_payload) _PPRZ_VAL_float(_payload, 8)

#define DL_TEMT_STATUS_light(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_TEMT_STATUS_f_light(_payload) _PPRZ_VAL_float(_payload, 4)

#define DL_GP2Y_STATUS_idensity(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_GP2Y_STATUS_density(_payload) _PPRZ_VAL_float(_payload, 4)

#define DL_SHT_I2C_SERIAL_serial0(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_SHT_I2C_SERIAL_serial1(_payload) _PPRZ_VAL_uint32_t(_payload, 6)

#define DL_PPM_ppm_rate(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_PPM_values_length(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_PPM_values(_payload) _PPRZ_VAL_uint16_t_array(_payload, 4)

#define DL_RC_values_length(_payload) _PPRZ_VAL_len_aligned(_payload, 2)
#define DL_RC_values(_payload) _PPRZ_VAL_int16_t_array(_payload, 3)

#define DL_COMMANDS_values_length(_payload) _PPRZ_VAL_len_aligned(_payload, 2)
#define DL_COMMANDS_values(_payload) _PPRZ_VAL_int16_t_array(_payload, 3)

#define DL_FBW_STATUS_rc_status(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_FBW_STATUS_frame_rate(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_FBW_STATUS_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 4)
#define DL_FBW_STATUS_vsupply(_payload) _PPRZ_VAL_uint16_t(_payload, 5)
#define DL_FBW_STATUS_current(_payload) _PPRZ_VAL_int32_t(_payload, 7)

#define DL_ADC_mcu(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_ADC_values_length(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_ADC_values(_payload) _PPRZ_VAL_uint16_t_array(_payload, 4)

#define DL_ACTUATORS_values_length(_payload) _PPRZ_VAL_len_aligned(_payload, 2)
#define DL_ACTUATORS_values(_payload) _PPRZ_VAL_int16_t_array(_payload, 3)

#define DL_BLUEGIGA_data_rate(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_BLUEGIGA_A2A_msg_rate(_payload) _PPRZ_VAL_uint32_t(_payload, 6)

#define DL_PIKSI_HEARTBEAT_heartbeat(_payload) _PPRZ_VAL_uint32_t(_payload, 2)

#define DL_MULTIGAZE_METERS_multigaze_meters_length(_payload) _PPRZ_VAL_len_aligned(_payload, 2)
#define DL_MULTIGAZE_METERS_multigaze_meters(_payload) _PPRZ_VAL_float_array(_payload, 3)

#define DL_DC_SHOT_photo_nr(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_DC_SHOT_lat(_payload) _PPRZ_VAL_int32_t(_payload, 4)
#define DL_DC_SHOT_lon(_payload) _PPRZ_VAL_int32_t(_payload, 8)
#define DL_DC_SHOT_alt(_payload) _PPRZ_VAL_int32_t(_payload, 12)
#define DL_DC_SHOT_hmsl(_payload) _PPRZ_VAL_int32_t(_payload, 16)
#define DL_DC_SHOT_phi(_payload) _PPRZ_VAL_int16_t(_payload, 20)
#define DL_DC_SHOT_theta(_payload) _PPRZ_VAL_int16_t(_payload, 22)
#define DL_DC_SHOT_psi(_payload) _PPRZ_VAL_int16_t(_payload, 24)
#define DL_DC_SHOT_course(_payload) _PPRZ_VAL_int16_t(_payload, 26)
#define DL_DC_SHOT_speed(_payload) _PPRZ_VAL_uint16_t(_payload, 28)
#define DL_DC_SHOT_itow(_payload) _PPRZ_VAL_uint32_t(_payload, 30)

#define DL_TEST_BOARD_RESULTS_uart(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_TEST_BOARD_RESULTS_ppm(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_TEST_BOARD_RESULTS_servo_length(_payload) _PPRZ_VAL_len_aligned(_payload, 4)
#define DL_TEST_BOARD_RESULTS_servo(_payload) _PPRZ_VAL_uint16_t_array(_payload, 5)

#define DL_MLX_SERIAL_serial0(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_MLX_SERIAL_serial1(_payload) _PPRZ_VAL_uint32_t(_payload, 6)

#define DL_PAYLOAD_values_length(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_PAYLOAD_values(_payload) _PPRZ_VAL_uint8_t_array(_payload, 3)

#define DL_HTM_STATUS_ihumid(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_HTM_STATUS_itemp(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_HTM_STATUS_humid(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_HTM_STATUS_temp(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_BARO_MS5611_d1(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_BARO_MS5611_d2(_payload) _PPRZ_VAL_uint32_t(_payload, 6)
#define DL_BARO_MS5611_pressure(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_BARO_MS5611_temp(_payload) _PPRZ_VAL_float(_payload, 14)

#define DL_MS5611_COEFF_c0(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_MS5611_COEFF_c1(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_MS5611_COEFF_c2(_payload) _PPRZ_VAL_uint16_t(_payload, 6)
#define DL_MS5611_COEFF_c3(_payload) _PPRZ_VAL_uint16_t(_payload, 8)
#define DL_MS5611_COEFF_c4(_payload) _PPRZ_VAL_uint16_t(_payload, 10)
#define DL_MS5611_COEFF_c5(_payload) _PPRZ_VAL_uint16_t(_payload, 12)
#define DL_MS5611_COEFF_c6(_payload) _PPRZ_VAL_uint16_t(_payload, 14)
#define DL_MS5611_COEFF_c7(_payload) _PPRZ_VAL_uint16_t(_payload, 16)

#define DL_ATMOSPHERE_CHARGE_t0(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_ATMOSPHERE_CHARGE_t1(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_ATMOSPHERE_CHARGE_t2(_payload) _PPRZ_VAL_uint16_t(_payload, 6)
#define DL_ATMOSPHERE_CHARGE_t3(_payload) _PPRZ_VAL_uint16_t(_payload, 8)
#define DL_ATMOSPHERE_CHARGE_t4(_payload) _PPRZ_VAL_uint16_t(_payload, 10)
#define DL_ATMOSPHERE_CHARGE_t5(_payload) _PPRZ_VAL_uint16_t(_payload, 12)
#define DL_ATMOSPHERE_CHARGE_t6(_payload) _PPRZ_VAL_uint16_t(_payload, 14)
#define DL_ATMOSPHERE_CHARGE_t7(_payload) _PPRZ_VAL_uint16_t(_payload, 16)
#define DL_ATMOSPHERE_CHARGE_t8(_payload) _PPRZ_VAL_uint16_t(_payload, 18)
#define DL_ATMOSPHERE_CHARGE_t9(_payload) _PPRZ_VAL_uint16_t(_payload, 20)

#define DL_SOLAR_RADIATION_up_t0(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_SOLAR_RADIATION_dn_t0(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_SOLAR_RADIATION_up_t1(_payload) _PPRZ_VAL_uint16_t(_payload, 6)
#define DL_SOLAR_RADIATION_dn_t1(_payload) _PPRZ_VAL_uint16_t(_payload, 8)
#define DL_SOLAR_RADIATION_up_t2(_payload) _PPRZ_VAL_uint16_t(_payload, 10)
#define DL_SOLAR_RADIATION_dn_t2(_payload) _PPRZ_VAL_uint16_t(_payload, 12)
#define DL_SOLAR_RADIATION_up_t3(_payload) _PPRZ_VAL_uint16_t(_payload, 14)
#define DL_SOLAR_RADIATION_dn_t3(_payload) _PPRZ_VAL_uint16_t(_payload, 16)
#define DL_SOLAR_RADIATION_up_t4(_payload) _PPRZ_VAL_uint16_t(_payload, 18)
#define DL_SOLAR_RADIATION_dn_t4(_payload) _PPRZ_VAL_uint16_t(_payload, 20)
#define DL_SOLAR_RADIATION_up_t5(_payload) _PPRZ_VAL_uint16_t(_payload, 22)
#define DL_SOLAR_RADIATION_dn_t5(_payload) _PPRZ_VAL_uint16_t(_payload, 24)
#define DL_SOLAR_RADIATION_up_t6(_payload) _PPRZ_VAL_uint16_t(_payload, 26)
#define DL_SOLAR_RADIATION_dn_t6(_payload) _PPRZ_VAL_uint16_t(_payload, 28)
#define DL_SOLAR_RADIATION_up_t7(_payload) _PPRZ_VAL_uint16_t(_payload, 30)
#define DL_SOLAR_RADIATION_dn_t7(_payload) _PPRZ_VAL_uint16_t(_payload, 32)
#define DL_SOLAR_RADIATION_up_t8(_payload) _PPRZ_VAL_uint16_t(_payload, 34)
#define DL_SOLAR_RADIATION_dn_t8(_payload) _PPRZ_VAL_uint16_t(_payload, 36)
#define DL_SOLAR_RADIATION_up_t9(_payload) _PPRZ_VAL_uint16_t(_payload, 38)
#define DL_SOLAR_RADIATION_dn_t9(_payload) _PPRZ_VAL_uint16_t(_payload, 40)

#define DL_TCAS_TA_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)

#define DL_TCAS_RA_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_TCAS_RA_resolve(_payload) _PPRZ_VAL_uint8_t(_payload, 3)

#define DL_TCAS_RESOLVED_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)

#define DL_TCAS_DEBUG_ac_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_TCAS_DEBUG_tau(_payload) _PPRZ_VAL_float(_payload, 3)

#define DL_POTENTIAL_east(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_POTENTIAL_north(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_POTENTIAL_alt(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_POTENTIAL_speed(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_POTENTIAL_climb(_payload) _PPRZ_VAL_float(_payload, 18)

#define DL_VERTICAL_ENERGY_Epot_err(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_VERTICAL_ENERGY_Ekin_err(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_VERTICAL_ENERGY_Etot_err(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_VERTICAL_ENERGY_Edis_err(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_VERTICAL_ENERGY_throttle(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_VERTICAL_ENERGY_nav_pitch(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_VERTICAL_ENERGY_speed_sp(_payload) _PPRZ_VAL_float(_payload, 26)

#define DL_TEMP_TCOUPLE_fval0(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_TEMP_TCOUPLE_fval1(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_TEMP_TCOUPLE_fval2(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_TEMP_TCOUPLE_fval3(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_TEMP_TCOUPLE_fref0(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_TEMP_TCOUPLE_fref1(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_TEMP_TCOUPLE_fref2(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_TEMP_TCOUPLE_fref3(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_TEMP_TCOUPLE_val0(_payload) _PPRZ_VAL_uint16_t(_payload, 34)
#define DL_TEMP_TCOUPLE_val1(_payload) _PPRZ_VAL_uint16_t(_payload, 36)
#define DL_TEMP_TCOUPLE_val2(_payload) _PPRZ_VAL_uint16_t(_payload, 38)
#define DL_TEMP_TCOUPLE_val3(_payload) _PPRZ_VAL_uint16_t(_payload, 40)
#define DL_TEMP_TCOUPLE_ref0(_payload) _PPRZ_VAL_uint16_t(_payload, 42)
#define DL_TEMP_TCOUPLE_ref1(_payload) _PPRZ_VAL_uint16_t(_payload, 44)
#define DL_TEMP_TCOUPLE_ref2(_payload) _PPRZ_VAL_uint16_t(_payload, 46)
#define DL_TEMP_TCOUPLE_ref3(_payload) _PPRZ_VAL_uint16_t(_payload, 48)

#define DL_SHT_I2C_STATUS_ihumid(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_SHT_I2C_STATUS_itemp(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_SHT_I2C_STATUS_humid(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_SHT_I2C_STATUS_temp(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_CAMERA_SNAPSHOT_snapshot_image_number(_payload) _PPRZ_VAL_uint16_t(_payload, 2)

#define DL_TIMESTAMP_timestamp(_payload) _PPRZ_VAL_uint32_t(_payload, 2)

#define DL_STAB_ATTITUDE_FLOAT_est_p(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_STAB_ATTITUDE_FLOAT_est_q(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_STAB_ATTITUDE_FLOAT_est_r(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_STAB_ATTITUDE_FLOAT_est_phi(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_STAB_ATTITUDE_FLOAT_est_theta(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_STAB_ATTITUDE_FLOAT_est_psi(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_STAB_ATTITUDE_FLOAT_ref_phi(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_STAB_ATTITUDE_FLOAT_ref_theta(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_STAB_ATTITUDE_FLOAT_ref_psi(_payload) _PPRZ_VAL_float(_payload, 34)
#define DL_STAB_ATTITUDE_FLOAT_sum_err_phi(_payload) _PPRZ_VAL_float(_payload, 38)
#define DL_STAB_ATTITUDE_FLOAT_sum_err_theta(_payload) _PPRZ_VAL_float(_payload, 42)
#define DL_STAB_ATTITUDE_FLOAT_sum_err_psi(_payload) _PPRZ_VAL_float(_payload, 46)
#define DL_STAB_ATTITUDE_FLOAT_delta_a_fb(_payload) _PPRZ_VAL_float(_payload, 50)
#define DL_STAB_ATTITUDE_FLOAT_delta_e_fb(_payload) _PPRZ_VAL_float(_payload, 54)
#define DL_STAB_ATTITUDE_FLOAT_delta_r_fb(_payload) _PPRZ_VAL_float(_payload, 58)
#define DL_STAB_ATTITUDE_FLOAT_delta_a_ff(_payload) _PPRZ_VAL_float(_payload, 62)
#define DL_STAB_ATTITUDE_FLOAT_delta_e_ff(_payload) _PPRZ_VAL_float(_payload, 66)
#define DL_STAB_ATTITUDE_FLOAT_delta_r_ff(_payload) _PPRZ_VAL_float(_payload, 70)
#define DL_STAB_ATTITUDE_FLOAT_delta_a(_payload) _PPRZ_VAL_int32_t(_payload, 74)
#define DL_STAB_ATTITUDE_FLOAT_delta_e(_payload) _PPRZ_VAL_int32_t(_payload, 78)
#define DL_STAB_ATTITUDE_FLOAT_delta_r(_payload) _PPRZ_VAL_int32_t(_payload, 82)
#define DL_STAB_ATTITUDE_FLOAT_est_p_d(_payload) _PPRZ_VAL_float(_payload, 86)
#define DL_STAB_ATTITUDE_FLOAT_est_q_d(_payload) _PPRZ_VAL_float(_payload, 90)
#define DL_STAB_ATTITUDE_FLOAT_est_r_d(_payload) _PPRZ_VAL_float(_payload, 94)

#define DL_IMU_GYRO_SCALED_gp(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_IMU_GYRO_SCALED_gq(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_IMU_GYRO_SCALED_gr(_payload) _PPRZ_VAL_int32_t(_payload, 10)

#define DL_IMU_ACCEL_SCALED_ax(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_IMU_ACCEL_SCALED_ay(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_IMU_ACCEL_SCALED_az(_payload) _PPRZ_VAL_int32_t(_payload, 10)

#define DL_IMU_MAG_SCALED_mx(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_IMU_MAG_SCALED_my(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_IMU_MAG_SCALED_mz(_payload) _PPRZ_VAL_int32_t(_payload, 10)

#define DL_FILTER_phi(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_FILTER_theta(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_FILTER_psi(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_FILTER_measure_phi(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_FILTER_measure_theta(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_FILTER_measure_psi(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_FILTER_corrected_phi(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_FILTER_corrected_theta(_payload) _PPRZ_VAL_int32_t(_payload, 30)
#define DL_FILTER_corrected_psi(_payload) _PPRZ_VAL_int32_t(_payload, 34)
#define DL_FILTER_correction_phi(_payload) _PPRZ_VAL_int32_t(_payload, 38)
#define DL_FILTER_correction_theta(_payload) _PPRZ_VAL_int32_t(_payload, 42)
#define DL_FILTER_correction_psi(_payload) _PPRZ_VAL_int32_t(_payload, 46)
#define DL_FILTER_bp(_payload) _PPRZ_VAL_int32_t(_payload, 50)
#define DL_FILTER_bq(_payload) _PPRZ_VAL_int32_t(_payload, 54)
#define DL_FILTER_br(_payload) _PPRZ_VAL_int32_t(_payload, 58)
#define DL_FILTER_comp_id(_payload) _PPRZ_VAL_uint8_t(_payload, 62)

#define DL_FILTER2_px(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_FILTER2_py(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_FILTER2_pz(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_FILTER2_gsx(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_FILTER2_gsy(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_FILTER2_gsz(_payload) _PPRZ_VAL_int32_t(_payload, 22)

#define DL_RATE_LOOP_sp_p(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_RATE_LOOP_sp_q(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_RATE_LOOP_sp_r(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_RATE_LOOP_sumerr_p(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_RATE_LOOP_sumerr_q(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_RATE_LOOP_sumerr_r(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_RATE_LOOP_fb_p(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_RATE_LOOP_fb_q(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_RATE_LOOP_fb_r(_payload) _PPRZ_VAL_float(_payload, 34)
#define DL_RATE_LOOP_delta_t(_payload) _PPRZ_VAL_int32_t(_payload, 38)

#define DL_FILTER_ALIGNER_lp_gp(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_FILTER_ALIGNER_lp_gq(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_FILTER_ALIGNER_lp_gr(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_FILTER_ALIGNER_gp(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_FILTER_ALIGNER_gq(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_FILTER_ALIGNER_gr(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_FILTER_ALIGNER_noise(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_FILTER_ALIGNER_cnt(_payload) _PPRZ_VAL_int32_t(_payload, 30)
#define DL_FILTER_ALIGNER_status(_payload) _PPRZ_VAL_uint8_t(_payload, 34)

#define DL_AIRSPEED_MS45XX_diffPress(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_AIRSPEED_MS45XX_temperature(_payload) _PPRZ_VAL_int16_t(_payload, 6)
#define DL_AIRSPEED_MS45XX_airspeed(_payload) _PPRZ_VAL_float(_payload, 8)

#define DL_FILTER_COR_mphi(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_FILTER_COR_mtheta(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_FILTER_COR_mpsi(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_FILTER_COR_qi(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_FILTER_COR_qx(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_FILTER_COR_qy(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_FILTER_COR_qz(_payload) _PPRZ_VAL_int32_t(_payload, 26)

#define DL_STAB_ATTITUDE_INT_est_p(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_STAB_ATTITUDE_INT_est_q(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_STAB_ATTITUDE_INT_est_r(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_STAB_ATTITUDE_INT_est_phi(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_STAB_ATTITUDE_INT_est_theta(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_STAB_ATTITUDE_INT_est_psi(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_STAB_ATTITUDE_INT_sp_phi(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_STAB_ATTITUDE_INT_sp_theta(_payload) _PPRZ_VAL_int32_t(_payload, 30)
#define DL_STAB_ATTITUDE_INT_sp_psi(_payload) _PPRZ_VAL_int32_t(_payload, 34)
#define DL_STAB_ATTITUDE_INT_sum_err_phi(_payload) _PPRZ_VAL_int32_t(_payload, 38)
#define DL_STAB_ATTITUDE_INT_sum_err_theta(_payload) _PPRZ_VAL_int32_t(_payload, 42)
#define DL_STAB_ATTITUDE_INT_sum_err_psi(_payload) _PPRZ_VAL_int32_t(_payload, 46)
#define DL_STAB_ATTITUDE_INT_delta_a_fb(_payload) _PPRZ_VAL_int32_t(_payload, 50)
#define DL_STAB_ATTITUDE_INT_delta_e_fb(_payload) _PPRZ_VAL_int32_t(_payload, 54)
#define DL_STAB_ATTITUDE_INT_delta_r_fb(_payload) _PPRZ_VAL_int32_t(_payload, 58)
#define DL_STAB_ATTITUDE_INT_delta_a_ff(_payload) _PPRZ_VAL_int32_t(_payload, 62)
#define DL_STAB_ATTITUDE_INT_delta_e_ff(_payload) _PPRZ_VAL_int32_t(_payload, 66)
#define DL_STAB_ATTITUDE_INT_delta_r_ff(_payload) _PPRZ_VAL_int32_t(_payload, 70)
#define DL_STAB_ATTITUDE_INT_delta_a(_payload) _PPRZ_VAL_int32_t(_payload, 74)
#define DL_STAB_ATTITUDE_INT_delta_e(_payload) _PPRZ_VAL_int32_t(_payload, 78)
#define DL_STAB_ATTITUDE_INT_delta_r(_payload) _PPRZ_VAL_int32_t(_payload, 82)

#define DL_STAB_ATTITUDE_REF_INT_sp_phi(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_STAB_ATTITUDE_REF_INT_sp_theta(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_STAB_ATTITUDE_REF_INT_sp_psi(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_STAB_ATTITUDE_REF_INT_ref_phi(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_STAB_ATTITUDE_REF_INT_ref_theta(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_STAB_ATTITUDE_REF_INT_ref_psi(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_STAB_ATTITUDE_REF_INT_ref_p(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_STAB_ATTITUDE_REF_INT_ref_q(_payload) _PPRZ_VAL_int32_t(_payload, 30)
#define DL_STAB_ATTITUDE_REF_INT_ref_r(_payload) _PPRZ_VAL_int32_t(_payload, 34)
#define DL_STAB_ATTITUDE_REF_INT_ref_pd(_payload) _PPRZ_VAL_int32_t(_payload, 38)
#define DL_STAB_ATTITUDE_REF_INT_ref_qd(_payload) _PPRZ_VAL_int32_t(_payload, 42)
#define DL_STAB_ATTITUDE_REF_INT_ref_rd(_payload) _PPRZ_VAL_int32_t(_payload, 46)

#define DL_STAB_ATTITUDE_REF_FLOAT_sp_phi(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_STAB_ATTITUDE_REF_FLOAT_sp_theta(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_STAB_ATTITUDE_REF_FLOAT_sp_psi(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_phi(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_theta(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_psi(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_p(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_q(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_r(_payload) _PPRZ_VAL_float(_payload, 34)
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_pd(_payload) _PPRZ_VAL_float(_payload, 38)
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_qd(_payload) _PPRZ_VAL_float(_payload, 42)
#define DL_STAB_ATTITUDE_REF_FLOAT_ref_rd(_payload) _PPRZ_VAL_float(_payload, 46)

#define DL_ROTORCRAFT_CMD_cmd_roll(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_ROTORCRAFT_CMD_cmd_pitch(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_ROTORCRAFT_CMD_cmd_yaw(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_ROTORCRAFT_CMD_cmd_thrust(_payload) _PPRZ_VAL_int32_t(_payload, 14)

#define DL_GUIDANCE_H_INT_sp_x(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_GUIDANCE_H_INT_sp_y(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_GUIDANCE_H_INT_ref_x(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_GUIDANCE_H_INT_ref_y(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_GUIDANCE_H_INT_est_x(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_GUIDANCE_H_INT_est_y(_payload) _PPRZ_VAL_int32_t(_payload, 22)

#define DL_VERT_LOOP_z_sp(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_VERT_LOOP_zd_sp(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_VERT_LOOP_est_z(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_VERT_LOOP_est_zd(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_VERT_LOOP_est_zdd(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_VERT_LOOP_ref_z(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_VERT_LOOP_ref_zd(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_VERT_LOOP_ref_zdd(_payload) _PPRZ_VAL_int32_t(_payload, 30)
#define DL_VERT_LOOP_adp_inv_m(_payload) _PPRZ_VAL_int32_t(_payload, 34)
#define DL_VERT_LOOP_adp_cov(_payload) _PPRZ_VAL_int32_t(_payload, 38)
#define DL_VERT_LOOP_adp_meas(_payload) _PPRZ_VAL_int32_t(_payload, 42)
#define DL_VERT_LOOP_sum_err(_payload) _PPRZ_VAL_int32_t(_payload, 46)
#define DL_VERT_LOOP_ff_cmd(_payload) _PPRZ_VAL_int32_t(_payload, 50)
#define DL_VERT_LOOP_fb_cmd(_payload) _PPRZ_VAL_int32_t(_payload, 54)
#define DL_VERT_LOOP_delta_t(_payload) _PPRZ_VAL_int32_t(_payload, 58)

#define DL_HOVER_LOOP_sp_x(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_HOVER_LOOP_sp_y(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_HOVER_LOOP_est_x(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_HOVER_LOOP_est_y(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_HOVER_LOOP_est_xd(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_HOVER_LOOP_est_yd(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_HOVER_LOOP_est_xdd(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_HOVER_LOOP_est_ydd(_payload) _PPRZ_VAL_int32_t(_payload, 30)
#define DL_HOVER_LOOP_err_x(_payload) _PPRZ_VAL_int32_t(_payload, 34)
#define DL_HOVER_LOOP_err_y(_payload) _PPRZ_VAL_int32_t(_payload, 38)
#define DL_HOVER_LOOP_err_xd(_payload) _PPRZ_VAL_int32_t(_payload, 42)
#define DL_HOVER_LOOP_err_yd(_payload) _PPRZ_VAL_int32_t(_payload, 46)
#define DL_HOVER_LOOP_err_sum_x(_payload) _PPRZ_VAL_int32_t(_payload, 50)
#define DL_HOVER_LOOP_err_sum_y(_payload) _PPRZ_VAL_int32_t(_payload, 54)
#define DL_HOVER_LOOP_cmd_x(_payload) _PPRZ_VAL_int32_t(_payload, 58)
#define DL_HOVER_LOOP_cmd_y(_payload) _PPRZ_VAL_int32_t(_payload, 62)
#define DL_HOVER_LOOP_cmd_heading(_payload) _PPRZ_VAL_int32_t(_payload, 66)

#define DL_ROTORCRAFT_FP_east(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_ROTORCRAFT_FP_north(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_ROTORCRAFT_FP_up(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_ROTORCRAFT_FP_veast(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_ROTORCRAFT_FP_vnorth(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_ROTORCRAFT_FP_vup(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_ROTORCRAFT_FP_phi(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_ROTORCRAFT_FP_theta(_payload) _PPRZ_VAL_int32_t(_payload, 30)
#define DL_ROTORCRAFT_FP_psi(_payload) _PPRZ_VAL_int32_t(_payload, 34)
#define DL_ROTORCRAFT_FP_carrot_east(_payload) _PPRZ_VAL_int32_t(_payload, 38)
#define DL_ROTORCRAFT_FP_carrot_north(_payload) _PPRZ_VAL_int32_t(_payload, 42)
#define DL_ROTORCRAFT_FP_carrot_up(_payload) _PPRZ_VAL_int32_t(_payload, 46)
#define DL_ROTORCRAFT_FP_carrot_psi(_payload) _PPRZ_VAL_int32_t(_payload, 50)
#define DL_ROTORCRAFT_FP_thrust(_payload) _PPRZ_VAL_int32_t(_payload, 54)
#define DL_ROTORCRAFT_FP_flight_time(_payload) _PPRZ_VAL_uint16_t(_payload, 58)

#define DL_TEMP_ADC_temp1(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_TEMP_ADC_temp2(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_TEMP_ADC_temp3(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_GUIDANCE_H_REF_INT_sp_x(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_GUIDANCE_H_REF_INT_ref_x(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_GUIDANCE_H_REF_INT_sp_xd(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_GUIDANCE_H_REF_INT_ref_xd(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_GUIDANCE_H_REF_INT_ref_xdd(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_GUIDANCE_H_REF_INT_sp_y(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_GUIDANCE_H_REF_INT_ref_y(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_GUIDANCE_H_REF_INT_sp_yd(_payload) _PPRZ_VAL_int32_t(_payload, 30)
#define DL_GUIDANCE_H_REF_INT_ref_yd(_payload) _PPRZ_VAL_int32_t(_payload, 34)
#define DL_GUIDANCE_H_REF_INT_ref_ydd(_payload) _PPRZ_VAL_int32_t(_payload, 38)

#define DL_ROTORCRAFT_TUNE_HOVER_rc_roll(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_ROTORCRAFT_TUNE_HOVER_rc_pitch(_payload) _PPRZ_VAL_int16_t(_payload, 4)
#define DL_ROTORCRAFT_TUNE_HOVER_rc_yaw(_payload) _PPRZ_VAL_int16_t(_payload, 6)
#define DL_ROTORCRAFT_TUNE_HOVER_cmd_roll(_payload) _PPRZ_VAL_int32_t(_payload, 8)
#define DL_ROTORCRAFT_TUNE_HOVER_cmd_pitch(_payload) _PPRZ_VAL_int32_t(_payload, 12)
#define DL_ROTORCRAFT_TUNE_HOVER_cmd_yaw(_payload) _PPRZ_VAL_int32_t(_payload, 16)
#define DL_ROTORCRAFT_TUNE_HOVER_cmd_thrust(_payload) _PPRZ_VAL_int32_t(_payload, 20)
#define DL_ROTORCRAFT_TUNE_HOVER_body_phi(_payload) _PPRZ_VAL_int32_t(_payload, 24)
#define DL_ROTORCRAFT_TUNE_HOVER_body_theta(_payload) _PPRZ_VAL_int32_t(_payload, 28)
#define DL_ROTORCRAFT_TUNE_HOVER_body_psi(_payload) _PPRZ_VAL_int32_t(_payload, 32)

#define DL_INS_Z_baro_z(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_INS_Z_ins_z(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_INS_Z_ins_zd(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_INS_Z_ins_zdd(_payload) _PPRZ_VAL_int32_t(_payload, 14)

#define DL_PCAP01_STATUS_ihumid(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_PCAP01_STATUS_itemp(_payload) _PPRZ_VAL_uint32_t(_payload, 6)
#define DL_PCAP01_STATUS_humid(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_PCAP01_STATUS_temp(_payload) _PPRZ_VAL_float(_payload, 14)

#define DL_GEIGER_COUNTER_tube1(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_GEIGER_COUNTER_tube2(_payload) _PPRZ_VAL_uint32_t(_payload, 6)
#define DL_GEIGER_COUNTER_vsupply(_payload) _PPRZ_VAL_uint16_t(_payload, 10)

#define DL_INS_REF_ecef_x0(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_INS_REF_ecef_y0(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_INS_REF_ecef_z0(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_INS_REF_lat0(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_INS_REF_lon0(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_INS_REF_alt0(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_INS_REF_hmsl0(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_INS_REF_baro_qfe(_payload) _PPRZ_VAL_float(_payload, 30)

#define DL_GPS_INT_ecef_x(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_GPS_INT_ecef_y(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_GPS_INT_ecef_z(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_GPS_INT_lat(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_GPS_INT_lon(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_GPS_INT_alt(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_GPS_INT_hmsl(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_GPS_INT_ecef_xd(_payload) _PPRZ_VAL_int32_t(_payload, 30)
#define DL_GPS_INT_ecef_yd(_payload) _PPRZ_VAL_int32_t(_payload, 34)
#define DL_GPS_INT_ecef_zd(_payload) _PPRZ_VAL_int32_t(_payload, 38)
#define DL_GPS_INT_pacc(_payload) _PPRZ_VAL_uint32_t(_payload, 42)
#define DL_GPS_INT_sacc(_payload) _PPRZ_VAL_uint32_t(_payload, 46)
#define DL_GPS_INT_tow(_payload) _PPRZ_VAL_uint32_t(_payload, 50)
#define DL_GPS_INT_pdop(_payload) _PPRZ_VAL_uint16_t(_payload, 54)
#define DL_GPS_INT_numsv(_payload) _PPRZ_VAL_uint8_t(_payload, 56)
#define DL_GPS_INT_fix(_payload) _PPRZ_VAL_uint8_t(_payload, 57)
#define DL_GPS_INT_comp_id(_payload) _PPRZ_VAL_uint8_t(_payload, 58)

#define DL_AHRS_EULER_INT_imu_phi(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_AHRS_EULER_INT_imu_theta(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_AHRS_EULER_INT_imu_psi(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_AHRS_EULER_INT_body_phi(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_AHRS_EULER_INT_body_theta(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_AHRS_EULER_INT_body_psi(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_AHRS_EULER_INT_comp_id(_payload) _PPRZ_VAL_uint8_t(_payload, 26)

#define DL_AHRS_QUAT_INT_weight(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_AHRS_QUAT_INT_imu_qi(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_AHRS_QUAT_INT_imu_qx(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_AHRS_QUAT_INT_imu_qy(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_AHRS_QUAT_INT_imu_qz(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_AHRS_QUAT_INT_body_qi(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_AHRS_QUAT_INT_body_qx(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_AHRS_QUAT_INT_body_qy(_payload) _PPRZ_VAL_int32_t(_payload, 30)
#define DL_AHRS_QUAT_INT_body_qz(_payload) _PPRZ_VAL_int32_t(_payload, 34)
#define DL_AHRS_QUAT_INT_comp_id(_payload) _PPRZ_VAL_uint8_t(_payload, 38)

#define DL_AHRS_RMAT_INT_imu_m00(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_AHRS_RMAT_INT_imu_m01(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_AHRS_RMAT_INT_imu_m02(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_AHRS_RMAT_INT_imu_m10(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_AHRS_RMAT_INT_imu_m11(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_AHRS_RMAT_INT_imu_m12(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_AHRS_RMAT_INT_imu_m20(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_AHRS_RMAT_INT_imu_m21(_payload) _PPRZ_VAL_int32_t(_payload, 30)
#define DL_AHRS_RMAT_INT_imu_m22(_payload) _PPRZ_VAL_int32_t(_payload, 34)
#define DL_AHRS_RMAT_INT_body_m00(_payload) _PPRZ_VAL_int32_t(_payload, 38)
#define DL_AHRS_RMAT_INT_body_m01(_payload) _PPRZ_VAL_int32_t(_payload, 42)
#define DL_AHRS_RMAT_INT_body_m02(_payload) _PPRZ_VAL_int32_t(_payload, 46)
#define DL_AHRS_RMAT_INT_body_m10(_payload) _PPRZ_VAL_int32_t(_payload, 50)
#define DL_AHRS_RMAT_INT_body_m11(_payload) _PPRZ_VAL_int32_t(_payload, 54)
#define DL_AHRS_RMAT_INT_body_m12(_payload) _PPRZ_VAL_int32_t(_payload, 58)
#define DL_AHRS_RMAT_INT_body_m20(_payload) _PPRZ_VAL_int32_t(_payload, 62)
#define DL_AHRS_RMAT_INT_body_m21(_payload) _PPRZ_VAL_int32_t(_payload, 66)
#define DL_AHRS_RMAT_INT_body_m22(_payload) _PPRZ_VAL_int32_t(_payload, 70)
#define DL_AHRS_RMAT_INT_comp_id(_payload) _PPRZ_VAL_uint8_t(_payload, 74)

#define DL_ROTORCRAFT_NAV_STATUS_block_time(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_ROTORCRAFT_NAV_STATUS_stage_time(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_ROTORCRAFT_NAV_STATUS_dist_home(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_ROTORCRAFT_NAV_STATUS_dist_wp(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_ROTORCRAFT_NAV_STATUS_cur_block(_payload) _PPRZ_VAL_uint8_t(_payload, 14)
#define DL_ROTORCRAFT_NAV_STATUS_cur_stage(_payload) _PPRZ_VAL_uint8_t(_payload, 15)
#define DL_ROTORCRAFT_NAV_STATUS_horizontal_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 16)

#define DL_ROTORCRAFT_RADIO_CONTROL_roll(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_ROTORCRAFT_RADIO_CONTROL_pitch(_payload) _PPRZ_VAL_int16_t(_payload, 4)
#define DL_ROTORCRAFT_RADIO_CONTROL_yaw(_payload) _PPRZ_VAL_int16_t(_payload, 6)
#define DL_ROTORCRAFT_RADIO_CONTROL_throttle(_payload) _PPRZ_VAL_int16_t(_payload, 8)
#define DL_ROTORCRAFT_RADIO_CONTROL_mode(_payload) _PPRZ_VAL_int16_t(_payload, 10)
#define DL_ROTORCRAFT_RADIO_CONTROL_kill(_payload) _PPRZ_VAL_int16_t(_payload, 12)
#define DL_ROTORCRAFT_RADIO_CONTROL_status(_payload) _PPRZ_VAL_uint8_t(_payload, 14)

#define DL_VFF_EXTENDED_meas_baro(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_VFF_EXTENDED_meas_alt(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_VFF_EXTENDED_z(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_VFF_EXTENDED_zd(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_VFF_EXTENDED_zdd(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_VFF_EXTENDED_bias(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_VFF_EXTENDED_offset(_payload) _PPRZ_VAL_float(_payload, 26)

#define DL_VFF_measure(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_VFF_z(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_VFF_zd(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_VFF_bias(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_VFF_Pzz(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_VFF_Pzdzd(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_VFF_Pbb(_payload) _PPRZ_VAL_float(_payload, 26)

#define DL_GEO_MAG_Hx(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_GEO_MAG_Hy(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_GEO_MAG_Hz(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_GEO_MAG_comp_id(_payload) _PPRZ_VAL_uint8_t(_payload, 14)

#define DL_HFF_x(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_HFF_y(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_HFF_xd(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_HFF_yd(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_HFF_xdd(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_HFF_ydd(_payload) _PPRZ_VAL_float(_payload, 22)

#define DL_HFF_DBG_x_measure(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_HFF_DBG_y_measure(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_HFF_DBG_xd_measure(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_HFF_DBG_yd_measure(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_HFF_DBG_Pxx(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_HFF_DBG_Pyy(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_HFF_DBG_Pxdxd(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_HFF_DBG_Pydyd(_payload) _PPRZ_VAL_float(_payload, 30)

#define DL_HFF_GPS_lag_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_HFF_GPS_lag_cnt_err(_payload) _PPRZ_VAL_int16_t(_payload, 4)
#define DL_HFF_GPS_save_cnt(_payload) _PPRZ_VAL_int16_t(_payload, 6)

#define DL_INS_SONAR_distance(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_INS_SONAR_var(_payload) _PPRZ_VAL_float(_payload, 6)

#define DL_ROTORCRAFT_CAM_tilt(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_ROTORCRAFT_CAM_pan(_payload) _PPRZ_VAL_int16_t(_payload, 4)

#define DL_AHRS_REF_QUAT_ref_qi(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_AHRS_REF_QUAT_ref_qx(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_AHRS_REF_QUAT_ref_qy(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_AHRS_REF_QUAT_ref_qz(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_AHRS_REF_QUAT_body_qi(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_AHRS_REF_QUAT_body_qx(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_AHRS_REF_QUAT_body_qy(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_AHRS_REF_QUAT_body_qz(_payload) _PPRZ_VAL_int32_t(_payload, 30)

#define DL_EKF7_XHAT_c(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_EKF7_XHAT_s1(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_EKF7_XHAT_s2(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_EKF7_XHAT_s3(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_EKF7_XHAT_p(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_EKF7_XHAT_q(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_EKF7_XHAT_r(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_EKF7_XHAT_bp(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_EKF7_XHAT_bq(_payload) _PPRZ_VAL_float(_payload, 34)
#define DL_EKF7_XHAT_br(_payload) _PPRZ_VAL_float(_payload, 38)

#define DL_EKF7_Y_timecount(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_EKF7_Y_g1(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_EKF7_Y_g2(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_EKF7_Y_g3(_payload) _PPRZ_VAL_float(_payload, 12)
#define DL_EKF7_Y_m1(_payload) _PPRZ_VAL_float(_payload, 16)
#define DL_EKF7_Y_m2(_payload) _PPRZ_VAL_float(_payload, 20)
#define DL_EKF7_Y_m3(_payload) _PPRZ_VAL_float(_payload, 24)
#define DL_EKF7_Y_p(_payload) _PPRZ_VAL_float(_payload, 28)
#define DL_EKF7_Y_q(_payload) _PPRZ_VAL_float(_payload, 32)
#define DL_EKF7_Y_r(_payload) _PPRZ_VAL_float(_payload, 36)

#define DL_EKF7_P_DIAG_c(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_EKF7_P_DIAG_s1(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_EKF7_P_DIAG_s2(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_EKF7_P_DIAG_s3(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_EKF7_P_DIAG_p(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_EKF7_P_DIAG_q(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_EKF7_P_DIAG_r(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_EKF7_P_DIAG_bp(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_EKF7_P_DIAG_bq(_payload) _PPRZ_VAL_float(_payload, 34)
#define DL_EKF7_P_DIAG_br(_payload) _PPRZ_VAL_float(_payload, 38)

#define DL_AHRS_EULER_phi(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_AHRS_EULER_theta(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_AHRS_EULER_psi(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_AHRS_EULER_comp_id(_payload) _PPRZ_VAL_uint8_t(_payload, 14)

#define DL_AHRS_MEASUREMENT_EULER_phi(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_AHRS_MEASUREMENT_EULER_theta(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_AHRS_MEASUREMENT_EULER_psi(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_WT_rpm(_payload) _PPRZ_VAL_float(_payload, 2)

#define DL_CSC_CAN_DEBUG_err_nb(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_CSC_CAN_DEBUG_err_code(_payload) _PPRZ_VAL_uint32_t(_payload, 6)

#define DL_CSC_CAN_MSG_frame(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_CSC_CAN_MSG_id(_payload) _PPRZ_VAL_uint32_t(_payload, 6)
#define DL_CSC_CAN_MSG_data_a(_payload) _PPRZ_VAL_uint32_t(_payload, 10)
#define DL_CSC_CAN_MSG_data_b(_payload) _PPRZ_VAL_uint32_t(_payload, 14)

#define DL_AHRS_GYRO_BIAS_INT_bp(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_AHRS_GYRO_BIAS_INT_bq(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_AHRS_GYRO_BIAS_INT_br(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_AHRS_GYRO_BIAS_INT_comp_id(_payload) _PPRZ_VAL_uint8_t(_payload, 14)

#define DL_AEROPROBE_counter(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_AEROPROBE_velocity(_payload) _PPRZ_VAL_int16_t(_payload, 6)
#define DL_AEROPROBE_a_attack(_payload) _PPRZ_VAL_int16_t(_payload, 8)
#define DL_AEROPROBE_a_sideslip(_payload) _PPRZ_VAL_int16_t(_payload, 10)
#define DL_AEROPROBE_altitude(_payload) _PPRZ_VAL_int32_t(_payload, 12)
#define DL_AEROPROBE_dynamic_p(_payload) _PPRZ_VAL_int32_t(_payload, 16)
#define DL_AEROPROBE_static_p(_payload) _PPRZ_VAL_int32_t(_payload, 20)
#define DL_AEROPROBE_checksum(_payload) _PPRZ_VAL_uint8_t(_payload, 24)

#define DL_FMS_TIME_tv_sec(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_FMS_TIME_tv_nsec(_payload) _PPRZ_VAL_uint32_t(_payload, 6)
#define DL_FMS_TIME_delay_ns(_payload) _PPRZ_VAL_uint32_t(_payload, 10)

#define DL_LOADCELL_load(_payload) _PPRZ_VAL_int32_t(_payload, 2)

#define DL_FLA_DEBUG_past_input(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_FLA_DEBUG_imu_rate(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_FLA_DEBUG_desired_accel(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_FLA_DEBUG_motor_command(_payload) _PPRZ_VAL_float(_payload, 14)

#define DL_BLMC_FAULT_STATUS_raw_fault_length(_payload) _PPRZ_VAL_len_aligned(_payload, 2)
#define DL_BLMC_FAULT_STATUS_raw_fault(_payload) _PPRZ_VAL_uint16_t_array(_payload, 3)

#define DL_BLMC_SPEEDS_speeds_length(_payload) _PPRZ_VAL_len_aligned(_payload, 2)
#define DL_BLMC_SPEEDS_speeds(_payload) _PPRZ_VAL_int16_t_array(_payload, 3)

#define DL_AHRS_DEBUG_QUAT_jqi(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_AHRS_DEBUG_QUAT_jqx(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_AHRS_DEBUG_QUAT_jqy(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_AHRS_DEBUG_QUAT_jqz(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_AHRS_DEBUG_QUAT_xqi(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_AHRS_DEBUG_QUAT_xqx(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_AHRS_DEBUG_QUAT_xqy(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_AHRS_DEBUG_QUAT_xqz(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_AHRS_DEBUG_QUAT_mqi(_payload) _PPRZ_VAL_float(_payload, 34)
#define DL_AHRS_DEBUG_QUAT_mqx(_payload) _PPRZ_VAL_float(_payload, 38)
#define DL_AHRS_DEBUG_QUAT_mqy(_payload) _PPRZ_VAL_float(_payload, 42)
#define DL_AHRS_DEBUG_QUAT_mqz(_payload) _PPRZ_VAL_float(_payload, 46)

#define DL_BLMC_BUSVOLTS_busvolts_length(_payload) _PPRZ_VAL_len_aligned(_payload, 2)
#define DL_BLMC_BUSVOLTS_busvolts(_payload) _PPRZ_VAL_uint16_t_array(_payload, 3)

#define DL_SYSTEM_STATUS_csc1_loop_count(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_SYSTEM_STATUS_csc1_msg_count(_payload) _PPRZ_VAL_uint32_t(_payload, 6)
#define DL_SYSTEM_STATUS_csc2_loop_count(_payload) _PPRZ_VAL_uint32_t(_payload, 10)
#define DL_SYSTEM_STATUS_csc2_msg_count(_payload) _PPRZ_VAL_uint32_t(_payload, 14)
#define DL_SYSTEM_STATUS_can_rx_err(_payload) _PPRZ_VAL_uint32_t(_payload, 18)
#define DL_SYSTEM_STATUS_can_tx_err(_payload) _PPRZ_VAL_uint32_t(_payload, 22)
#define DL_SYSTEM_STATUS_rc_parser_err(_payload) _PPRZ_VAL_uint32_t(_payload, 26)
#define DL_SYSTEM_STATUS_system_fault(_payload) _PPRZ_VAL_uint8_t(_payload, 30)

#define DL_DYNAMIXEL_left_wing(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_DYNAMIXEL_right_wing(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_DYNAMIXEL_left_wing_flag(_payload) _PPRZ_VAL_uint8_t(_payload, 6)
#define DL_DYNAMIXEL_right_wing_flag(_payload) _PPRZ_VAL_uint8_t(_payload, 7)
#define DL_DYNAMIXEL_invalid_position(_payload) _PPRZ_VAL_uint32_t(_payload, 8)
#define DL_DYNAMIXEL_timeout_events(_payload) _PPRZ_VAL_uint32_t(_payload, 12)
#define DL_DYNAMIXEL_checksum_errors(_payload) _PPRZ_VAL_uint32_t(_payload, 16)
#define DL_DYNAMIXEL_fuse_rotation_angle(_payload) _PPRZ_VAL_float(_payload, 20)
#define DL_DYNAMIXEL_fuse_rotation_rate(_payload) _PPRZ_VAL_float(_payload, 24)

#define DL_RMAT_DEBUG_a(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_RMAT_DEBUG_b(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_RMAT_DEBUG_c(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_RMAT_DEBUG_d(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_RMAT_DEBUG_e(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_RMAT_DEBUG_f(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_RMAT_DEBUG_g(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_RMAT_DEBUG_h(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_RMAT_DEBUG_i(_payload) _PPRZ_VAL_float(_payload, 34)

#define DL_SIMPLE_COMMANDS_roll(_payload) _PPRZ_VAL_int16_t(_payload, 2)
#define DL_SIMPLE_COMMANDS_pitch(_payload) _PPRZ_VAL_int16_t(_payload, 4)
#define DL_SIMPLE_COMMANDS_yaw(_payload) _PPRZ_VAL_int16_t(_payload, 6)

#define DL_VANE_SENSOR_alpha(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_VANE_SENSOR_alpha_filtered(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_VANE_SENSOR_alpha_target(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_VANE_SENSOR_alpha_vane_error(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_VANE_SENSOR_alpha2(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_VANE_SENSOR_beta(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_VANE_SENSOR_beta_filtered(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_VANE_SENSOR_beta_target(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_VANE_SENSOR_beta_vane_error(_payload) _PPRZ_VAL_float(_payload, 34)
#define DL_VANE_SENSOR_beta2(_payload) _PPRZ_VAL_float(_payload, 38)

#define DL_CONTROLLER_GAINS_roll_gamma_p(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_CONTROLLER_GAINS_roll_gamma_d(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_CONTROLLER_GAINS_roll_gamma_i(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_CONTROLLER_GAINS_pitch_gamma_p(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_CONTROLLER_GAINS_pitch_gamma_d(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_CONTROLLER_GAINS_pitch_gamma_i(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_CONTROLLER_GAINS_yaw_gamma_p(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_CONTROLLER_GAINS_yaw_gamma_d(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_CONTROLLER_GAINS_yaw_gamma_i(_payload) _PPRZ_VAL_float(_payload, 34)

#define DL_AHRS_LKF_phi(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_AHRS_LKF_theta(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_AHRS_LKF_psi(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_AHRS_LKF_qi(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_AHRS_LKF_qx(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_AHRS_LKF_qy(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_AHRS_LKF_qz(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_AHRS_LKF_p(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_AHRS_LKF_q(_payload) _PPRZ_VAL_float(_payload, 34)
#define DL_AHRS_LKF_r(_payload) _PPRZ_VAL_float(_payload, 38)
#define DL_AHRS_LKF_ax(_payload) _PPRZ_VAL_float(_payload, 42)
#define DL_AHRS_LKF_ay(_payload) _PPRZ_VAL_float(_payload, 46)
#define DL_AHRS_LKF_az(_payload) _PPRZ_VAL_float(_payload, 50)
#define DL_AHRS_LKF_mx(_payload) _PPRZ_VAL_float(_payload, 54)
#define DL_AHRS_LKF_my(_payload) _PPRZ_VAL_float(_payload, 58)
#define DL_AHRS_LKF_mz(_payload) _PPRZ_VAL_float(_payload, 62)

#define DL_AHRS_LKF_DEBUG_phi_err(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_AHRS_LKF_DEBUG_theta_err(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_AHRS_LKF_DEBUG_psi_err(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_AHRS_LKF_DEBUG_bp(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_AHRS_LKF_DEBUG_bq(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_AHRS_LKF_DEBUG_br(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_AHRS_LKF_DEBUG_quat_norm(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_AHRS_LKF_DEBUG_phi_accel(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_AHRS_LKF_DEBUG_theta_accel(_payload) _PPRZ_VAL_float(_payload, 34)
#define DL_AHRS_LKF_DEBUG_phi_cov(_payload) _PPRZ_VAL_float(_payload, 38)
#define DL_AHRS_LKF_DEBUG_theta_cov(_payload) _PPRZ_VAL_float(_payload, 42)
#define DL_AHRS_LKF_DEBUG_psi_cov(_payload) _PPRZ_VAL_float(_payload, 46)
#define DL_AHRS_LKF_DEBUG_bp_cov(_payload) _PPRZ_VAL_float(_payload, 50)
#define DL_AHRS_LKF_DEBUG_bq_cov(_payload) _PPRZ_VAL_float(_payload, 54)
#define DL_AHRS_LKF_DEBUG_br_cov(_payload) _PPRZ_VAL_float(_payload, 58)

#define DL_AHRS_LKF_ACC_DBG_qi_err(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_AHRS_LKF_ACC_DBG_qx_err(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_AHRS_LKF_ACC_DBG_qy_err(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_AHRS_LKF_ACC_DBG_qz_err(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_AHRS_LKF_ACC_DBG_bp_err(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_AHRS_LKF_ACC_DBG_bq_err(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_AHRS_LKF_ACC_DBG_br_err(_payload) _PPRZ_VAL_float(_payload, 26)

#define DL_AHRS_LKF_MAG_DBG_qi_err(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_AHRS_LKF_MAG_DBG_qx_err(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_AHRS_LKF_MAG_DBG_qy_err(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_AHRS_LKF_MAG_DBG_qz_err(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_AHRS_LKF_MAG_DBG_bp_err(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_AHRS_LKF_MAG_DBG_bq_err(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_AHRS_LKF_MAG_DBG_br_err(_payload) _PPRZ_VAL_float(_payload, 26)

#define DL_NPS_SENSORS_SCALED_acc_x(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_NPS_SENSORS_SCALED_acc_y(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_NPS_SENSORS_SCALED_acc_z(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_NPS_SENSORS_SCALED_mag_x(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_NPS_SENSORS_SCALED_mag_y(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_NPS_SENSORS_SCALED_mag_z(_payload) _PPRZ_VAL_float(_payload, 22)

#define DL_INS_ins_x(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_INS_ins_y(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_INS_ins_z(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_INS_ins_xd(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_INS_ins_yd(_payload) _PPRZ_VAL_int32_t(_payload, 18)
#define DL_INS_ins_zd(_payload) _PPRZ_VAL_int32_t(_payload, 22)
#define DL_INS_ins_xdd(_payload) _PPRZ_VAL_int32_t(_payload, 26)
#define DL_INS_ins_ydd(_payload) _PPRZ_VAL_int32_t(_payload, 30)
#define DL_INS_ins_zdd(_payload) _PPRZ_VAL_int32_t(_payload, 34)

#define DL_GPS_ERROR_x_position(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_GPS_ERROR_y_position(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_GPS_ERROR_z_position(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_GPS_ERROR_x_velocity(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_GPS_ERROR_y_velocity(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_GPS_ERROR_z_velocity(_payload) _PPRZ_VAL_float(_payload, 22)

#define DL_IMU_GYRO_gp(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_IMU_GYRO_gq(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_IMU_GYRO_gr(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_IMU_MAG_mx(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_IMU_MAG_my(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_IMU_MAG_mz(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_IMU_ACCEL_ax(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_IMU_ACCEL_ay(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_IMU_ACCEL_az(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_IMU_GYRO_RAW_gp(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_IMU_GYRO_RAW_gq(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_IMU_GYRO_RAW_gr(_payload) _PPRZ_VAL_int32_t(_payload, 10)

#define DL_IMU_ACCEL_RAW_ax(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_IMU_ACCEL_RAW_ay(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_IMU_ACCEL_RAW_az(_payload) _PPRZ_VAL_int32_t(_payload, 10)

#define DL_IMU_MAG_RAW_mx(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_IMU_MAG_RAW_my(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_IMU_MAG_RAW_mz(_payload) _PPRZ_VAL_int32_t(_payload, 10)

#define DL_IMU_MAG_SETTINGS_inclination(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_IMU_MAG_SETTINGS_declination(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_IMU_MAG_SETTINGS_hardiron_x(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_IMU_MAG_SETTINGS_hardiron_y(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_IMU_MAG_SETTINGS_hardiron_z(_payload) _PPRZ_VAL_float(_payload, 18)

#define DL_IMU_MAG_CURRENT_CALIBRATION_mx(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_IMU_MAG_CURRENT_CALIBRATION_my(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_IMU_MAG_CURRENT_CALIBRATION_mz(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_IMU_MAG_CURRENT_CALIBRATION_electrical_current(_payload) _PPRZ_VAL_int32_t(_payload, 14)

#define DL_UART_ERRORS_overrun_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_UART_ERRORS_noise_err_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_UART_ERRORS_framing_err_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 6)
#define DL_UART_ERRORS_bus_number(_payload) _PPRZ_VAL_uint8_t(_payload, 8)

#define DL_IMU_GYRO_LP_gp(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_IMU_GYRO_LP_gq(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_IMU_GYRO_LP_gr(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_IMU_PRESSURE_p(_payload) _PPRZ_VAL_float(_payload, 2)

#define DL_IMU_HS_GYRO_axis(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_IMU_HS_GYRO_samples_length(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_IMU_HS_GYRO_samples(_payload) _PPRZ_VAL_uint32_t_array(_payload, 4)

#define DL_TEST_PASSTHROUGH_STATUS_io_proc_msg_cnt(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_TEST_PASSTHROUGH_STATUS_io_proc_err_cnt(_payload) _PPRZ_VAL_uint32_t(_payload, 6)
#define DL_TEST_PASSTHROUGH_STATUS_io_link_msg_cnt(_payload) _PPRZ_VAL_uint32_t(_payload, 10)
#define DL_TEST_PASSTHROUGH_STATUS_io_link_err_cnt(_payload) _PPRZ_VAL_uint32_t(_payload, 14)
#define DL_TEST_PASSTHROUGH_STATUS_rc_status(_payload) _PPRZ_VAL_uint8_t(_payload, 18)

#define DL_TUNE_VERT_z_sp(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_TUNE_VERT_est_z(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_TUNE_VERT_ref_z(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_TUNE_VERT_ref_zd(_payload) _PPRZ_VAL_int32_t(_payload, 14)

#define DL_MF_DAQ_STATE_flight_time(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_MF_DAQ_STATE_p(_payload) _PPRZ_VAL_float(_payload, 4)
#define DL_MF_DAQ_STATE_q(_payload) _PPRZ_VAL_float(_payload, 8)
#define DL_MF_DAQ_STATE_r(_payload) _PPRZ_VAL_float(_payload, 12)
#define DL_MF_DAQ_STATE_phi(_payload) _PPRZ_VAL_float(_payload, 16)
#define DL_MF_DAQ_STATE_theta(_payload) _PPRZ_VAL_float(_payload, 20)
#define DL_MF_DAQ_STATE_psi(_payload) _PPRZ_VAL_float(_payload, 24)
#define DL_MF_DAQ_STATE_ax(_payload) _PPRZ_VAL_float(_payload, 28)
#define DL_MF_DAQ_STATE_ay(_payload) _PPRZ_VAL_float(_payload, 32)
#define DL_MF_DAQ_STATE_az(_payload) _PPRZ_VAL_float(_payload, 36)
#define DL_MF_DAQ_STATE_ve(_payload) _PPRZ_VAL_float(_payload, 40)
#define DL_MF_DAQ_STATE_vn(_payload) _PPRZ_VAL_float(_payload, 44)
#define DL_MF_DAQ_STATE_vu(_payload) _PPRZ_VAL_float(_payload, 48)
#define DL_MF_DAQ_STATE_lat(_payload) _PPRZ_VAL_float(_payload, 52)
#define DL_MF_DAQ_STATE_lon(_payload) _PPRZ_VAL_float(_payload, 56)
#define DL_MF_DAQ_STATE_alt(_payload) _PPRZ_VAL_float(_payload, 60)
#define DL_MF_DAQ_STATE_we(_payload) _PPRZ_VAL_float(_payload, 64)
#define DL_MF_DAQ_STATE_wn(_payload) _PPRZ_VAL_float(_payload, 68)

#define DL_INFO_MSG_msg_length(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_INFO_MSG_msg(_payload) _PPRZ_VAL_char_array(_payload, 3)

#define DL_STAB_ATTITUDE_INDI_angular_accel_p(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_STAB_ATTITUDE_INDI_angular_accel_q(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_STAB_ATTITUDE_INDI_angular_accel_r(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_STAB_ATTITUDE_INDI_angular_accel_ref_p(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_STAB_ATTITUDE_INDI_angular_accel_ref_q(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_STAB_ATTITUDE_INDI_angular_accel_ref_r(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_STAB_ATTITUDE_INDI_g1_p(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_STAB_ATTITUDE_INDI_g1_q(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_STAB_ATTITUDE_INDI_g1_r(_payload) _PPRZ_VAL_float(_payload, 34)
#define DL_STAB_ATTITUDE_INDI_g2_r(_payload) _PPRZ_VAL_float(_payload, 38)

#define DL_BEBOP_ACTUATORS_cmd_thrust(_payload) _PPRZ_VAL_int32_t(_payload, 2)
#define DL_BEBOP_ACTUATORS_cmd_roll(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_BEBOP_ACTUATORS_cmd_pitch(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_BEBOP_ACTUATORS_cmd_yaw(_payload) _PPRZ_VAL_int32_t(_payload, 14)
#define DL_BEBOP_ACTUATORS_rpm_ref_lf(_payload) _PPRZ_VAL_uint16_t(_payload, 18)
#define DL_BEBOP_ACTUATORS_rpm_ref_rf(_payload) _PPRZ_VAL_uint16_t(_payload, 20)
#define DL_BEBOP_ACTUATORS_rpm_ref_rb(_payload) _PPRZ_VAL_uint16_t(_payload, 22)
#define DL_BEBOP_ACTUATORS_rpm_ref_lb(_payload) _PPRZ_VAL_uint16_t(_payload, 24)
#define DL_BEBOP_ACTUATORS_rpm_obs_lf(_payload) _PPRZ_VAL_uint16_t(_payload, 26)
#define DL_BEBOP_ACTUATORS_rpm_obs_rf(_payload) _PPRZ_VAL_uint16_t(_payload, 28)
#define DL_BEBOP_ACTUATORS_rpm_obs_rb(_payload) _PPRZ_VAL_uint16_t(_payload, 30)
#define DL_BEBOP_ACTUATORS_rpm_obs_lb(_payload) _PPRZ_VAL_uint16_t(_payload, 32)

#define DL_WEATHER_p_amb(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_WEATHER_t_amb(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_WEATHER_windspeed(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_WEATHER_wind_from(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_WEATHER_humidity(_payload) _PPRZ_VAL_float(_payload, 18)

#define DL_IMU_TURNTABLE_omega(_payload) _PPRZ_VAL_float(_payload, 2)

#define DL_BARO_RAW_abs(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_BARO_RAW_diff(_payload) _PPRZ_VAL_float(_payload, 6)

#define DL_AIR_DATA_pressure(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_AIR_DATA_diff_p(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_AIR_DATA_temp(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_AIR_DATA_qnh(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_AIR_DATA_amsl_baro(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_AIR_DATA_airspeed(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_AIR_DATA_tas(_payload) _PPRZ_VAL_float(_payload, 26)

#define DL_AMSL_AMSL_BARO(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_AMSL_AMSL_GPS(_payload) _PPRZ_VAL_float(_payload, 6)

#define DL_DIVERGENCE_divergence(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_DIVERGENCE_divergence_vision(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_DIVERGENCE_normalized_thrust(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_DIVERGENCE_cov_div(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_DIVERGENCE_pstate(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_DIVERGENCE_pused(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_DIVERGENCE_sonar(_payload) _PPRZ_VAL_float(_payload, 26)

#define DL_VIDEO_SYNC_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)

#define DL_PERIODIC_TELEMETRY_ERR_process(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_PERIODIC_TELEMETRY_ERR_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_PERIODIC_TELEMETRY_ERR_id(_payload) _PPRZ_VAL_uint8_t(_payload, 4)

#define DL_TIME_t(_payload) _PPRZ_VAL_uint32_t(_payload, 2)

#define DL_OPTIC_FLOW_EST_fps(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_OPTIC_FLOW_EST_corner_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 6)
#define DL_OPTIC_FLOW_EST_tracked_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 8)
#define DL_OPTIC_FLOW_EST_flow_x(_payload) _PPRZ_VAL_int16_t(_payload, 10)
#define DL_OPTIC_FLOW_EST_flow_y(_payload) _PPRZ_VAL_int16_t(_payload, 12)
#define DL_OPTIC_FLOW_EST_flow_der_x(_payload) _PPRZ_VAL_int16_t(_payload, 14)
#define DL_OPTIC_FLOW_EST_flow_der_y(_payload) _PPRZ_VAL_int16_t(_payload, 16)
#define DL_OPTIC_FLOW_EST_vel_x(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_OPTIC_FLOW_EST_vel_y(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_OPTIC_FLOW_EST_div_size(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_OPTIC_FLOW_EST_surface_roughness(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_OPTIC_FLOW_EST_divergence(_payload) _PPRZ_VAL_float(_payload, 34)

#define DL_STEREO_IMG_frequency(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_STEREO_IMG_data_size(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_STEREO_IMG_imageBuffer_length(_payload) _PPRZ_VAL_uint8_t(_payload, 4)
#define DL_STEREO_IMG_imageBuffer(_payload) _PPRZ_VAL_uint8_t_array(_payload, 5)

#define DL_ROTORCRAFT_STATUS_link_imu_nb_err(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_ROTORCRAFT_STATUS_motor_nb_err(_payload) _PPRZ_VAL_uint8_t(_payload, 6)
#define DL_ROTORCRAFT_STATUS_rc_status(_payload) _PPRZ_VAL_uint8_t(_payload, 7)
#define DL_ROTORCRAFT_STATUS_frame_rate(_payload) _PPRZ_VAL_uint8_t(_payload, 8)
#define DL_ROTORCRAFT_STATUS_gps_status(_payload) _PPRZ_VAL_uint8_t(_payload, 9)
#define DL_ROTORCRAFT_STATUS_ap_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 10)
#define DL_ROTORCRAFT_STATUS_ap_in_flight(_payload) _PPRZ_VAL_uint8_t(_payload, 11)
#define DL_ROTORCRAFT_STATUS_ap_motors_on(_payload) _PPRZ_VAL_uint8_t(_payload, 12)
#define DL_ROTORCRAFT_STATUS_ap_h_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 13)
#define DL_ROTORCRAFT_STATUS_ap_v_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 14)
#define DL_ROTORCRAFT_STATUS_vsupply(_payload) _PPRZ_VAL_uint16_t(_payload, 15)
#define DL_ROTORCRAFT_STATUS_cpu_time(_payload) _PPRZ_VAL_uint16_t(_payload, 17)

#define DL_STATE_FILTER_STATUS_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_STATE_FILTER_STATUS_state_filter_mode(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_STATE_FILTER_STATUS_value(_payload) _PPRZ_VAL_uint16_t(_payload, 4)

#define DL_PX4FLOW_sensor_id(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_PX4FLOW_flow_x(_payload) _PPRZ_VAL_int16_t(_payload, 3)
#define DL_PX4FLOW_flow_y(_payload) _PPRZ_VAL_int16_t(_payload, 5)
#define DL_PX4FLOW_flow_comp_m_x(_payload) _PPRZ_VAL_float(_payload, 7)
#define DL_PX4FLOW_flow_comp_m_y(_payload) _PPRZ_VAL_float(_payload, 11)
#define DL_PX4FLOW_quality(_payload) _PPRZ_VAL_uint8_t(_payload, 15)
#define DL_PX4FLOW_ground_distance(_payload) _PPRZ_VAL_float(_payload, 16)

#define DL_OPTICFLOW_flow(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_OPTICFLOW_ref_alt(_payload) _PPRZ_VAL_float(_payload, 4)

#define DL_VISUALTARGET_x(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_VISUALTARGET_y(_payload) _PPRZ_VAL_uint16_t(_payload, 4)

#define DL_SONAR_sonar_meas(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_SONAR_sonar_distance(_payload) _PPRZ_VAL_float(_payload, 4)

#define DL_PAYLOAD_FLOAT_values_length(_payload) _PPRZ_VAL_len_aligned(_payload, 2)
#define DL_PAYLOAD_FLOAT_values(_payload) _PPRZ_VAL_float_array(_payload, 3)

#define DL_NPS_POS_LLH_pprz_lat(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_NPS_POS_LLH_lat_geod(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_NPS_POS_LLH_lat_geoc(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_NPS_POS_LLH_pprz_lon(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_NPS_POS_LLH_lon(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_NPS_POS_LLH_pprz_alt(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_NPS_POS_LLH_alt_geod(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_NPS_POS_LLH_agl(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_NPS_POS_LLH_asl(_payload) _PPRZ_VAL_float(_payload, 34)

#define DL_NPS_RPMS_front(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_NPS_RPMS_back(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_NPS_RPMS_right(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_NPS_RPMS_left(_payload) _PPRZ_VAL_float(_payload, 14)

#define DL_NPS_SPEED_POS_ltpp_xdd(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_NPS_SPEED_POS_ltpp_ydd(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_NPS_SPEED_POS_ltpp_zdd(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_NPS_SPEED_POS_ltpp_xd(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_NPS_SPEED_POS_ltpp_yd(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_NPS_SPEED_POS_ltpp_zd(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_NPS_SPEED_POS_ltpp_x(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_NPS_SPEED_POS_ltpp_y(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_NPS_SPEED_POS_ltpp_z(_payload) _PPRZ_VAL_float(_payload, 34)

#define DL_NPS_RATE_ATTITUDE_p(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_NPS_RATE_ATTITUDE_q(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_NPS_RATE_ATTITUDE_r(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_NPS_RATE_ATTITUDE_phi(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_NPS_RATE_ATTITUDE_theta(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_NPS_RATE_ATTITUDE_psi(_payload) _PPRZ_VAL_float(_payload, 22)

#define DL_NPS_GYRO_BIAS_bp(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_NPS_GYRO_BIAS_bq(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_NPS_GYRO_BIAS_br(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_NPS_RANGE_METER_dist(_payload) _PPRZ_VAL_float(_payload, 2)

#define DL_NPS_WIND_vx(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_NPS_WIND_vy(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_NPS_WIND_vz(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_ESC_amps(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_ESC_bat_volts(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_ESC_power(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_ESC_rpm(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_ESC_motor_volts(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_ESC_energy(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_ESC_motor_id(_payload) _PPRZ_VAL_uint8_t(_payload, 26)

#define DL_RTOS_MON_nb_threads(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_RTOS_MON_cpu_load(_payload) _PPRZ_VAL_uint8_t(_payload, 3)
#define DL_RTOS_MON_core_free(_payload) _PPRZ_VAL_uint32_t(_payload, 4)
#define DL_RTOS_MON_heap_free(_payload) _PPRZ_VAL_uint32_t(_payload, 8)

#define DL_PPRZ_DEBUG_module(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_PPRZ_DEBUG_errno(_payload) _PPRZ_VAL_uint8_t(_payload, 3)

#define DL_NPS_ACCEL_LTP_xdd(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_NPS_ACCEL_LTP_ydd(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_NPS_ACCEL_LTP_zdd(_payload) _PPRZ_VAL_float(_payload, 10)

#define DL_LOOSE_INS_GPS_status(_payload) _PPRZ_VAL_uint8_t(_payload, 2)
#define DL_LOOSE_INS_GPS_time_running(_payload) _PPRZ_VAL_double(_payload, 3)
#define DL_LOOSE_INS_GPS_q0(_payload) _PPRZ_VAL_double(_payload, 11)
#define DL_LOOSE_INS_GPS_q1(_payload) _PPRZ_VAL_double(_payload, 19)
#define DL_LOOSE_INS_GPS_q2(_payload) _PPRZ_VAL_double(_payload, 27)
#define DL_LOOSE_INS_GPS_q3(_payload) _PPRZ_VAL_double(_payload, 35)
#define DL_LOOSE_INS_GPS_phi(_payload) _PPRZ_VAL_double(_payload, 43)
#define DL_LOOSE_INS_GPS_theta(_payload) _PPRZ_VAL_double(_payload, 51)
#define DL_LOOSE_INS_GPS_psi(_payload) _PPRZ_VAL_double(_payload, 59)
#define DL_LOOSE_INS_GPS_north(_payload) _PPRZ_VAL_double(_payload, 67)
#define DL_LOOSE_INS_GPS_east(_payload) _PPRZ_VAL_double(_payload, 75)
#define DL_LOOSE_INS_GPS_down(_payload) _PPRZ_VAL_double(_payload, 83)
#define DL_LOOSE_INS_GPS_v_north(_payload) _PPRZ_VAL_double(_payload, 91)
#define DL_LOOSE_INS_GPS_v_east(_payload) _PPRZ_VAL_double(_payload, 99)
#define DL_LOOSE_INS_GPS_v_down(_payload) _PPRZ_VAL_double(_payload, 107)
#define DL_LOOSE_INS_GPS_est_p(_payload) _PPRZ_VAL_double(_payload, 115)
#define DL_LOOSE_INS_GPS_est_q(_payload) _PPRZ_VAL_double(_payload, 123)
#define DL_LOOSE_INS_GPS_est_r(_payload) _PPRZ_VAL_double(_payload, 131)
#define DL_LOOSE_INS_GPS_gyroBias_x(_payload) _PPRZ_VAL_double(_payload, 139)
#define DL_LOOSE_INS_GPS_gyroBias_y(_payload) _PPRZ_VAL_double(_payload, 147)
#define DL_LOOSE_INS_GPS_gyroBias_z(_payload) _PPRZ_VAL_double(_payload, 155)
#define DL_LOOSE_INS_GPS_imuCallbacks(_payload) _PPRZ_VAL_uint32_t(_payload, 163)
#define DL_LOOSE_INS_GPS_gpsCallbacks(_payload) _PPRZ_VAL_uint32_t(_payload, 167)
#define DL_LOOSE_INS_GPS_baroCallbacks(_payload) _PPRZ_VAL_uint32_t(_payload, 171)

#define DL_AFL_COEFFS_roll_a(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_AFL_COEFFS_roll_b(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_AFL_COEFFS_roll_c(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_AFL_COEFFS_pitch_a(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_AFL_COEFFS_pitch_b(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_AFL_COEFFS_pitch_c(_payload) _PPRZ_VAL_float(_payload, 22)
#define DL_AFL_COEFFS_yaw_a(_payload) _PPRZ_VAL_float(_payload, 26)
#define DL_AFL_COEFFS_yaw_b(_payload) _PPRZ_VAL_float(_payload, 30)
#define DL_AFL_COEFFS_yaw_c(_payload) _PPRZ_VAL_float(_payload, 34)

#define DL_GPS_SMALL_multiplex_speed(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_GPS_SMALL_lat(_payload) _PPRZ_VAL_int32_t(_payload, 6)
#define DL_GPS_SMALL_lon(_payload) _PPRZ_VAL_int32_t(_payload, 10)
#define DL_GPS_SMALL_alt(_payload) _PPRZ_VAL_int16_t(_payload, 14)

#define DL_I2C_ERRORS_wd_reset_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 2)
#define DL_I2C_ERRORS_queue_full_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 4)
#define DL_I2C_ERRORS_acknowledge_failure_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 6)
#define DL_I2C_ERRORS_misplaced_start_or_stop_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 8)
#define DL_I2C_ERRORS_arbitration_lost_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 10)
#define DL_I2C_ERRORS_overrun_or_underrun_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 12)
#define DL_I2C_ERRORS_pec_error_in_reception_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 14)
#define DL_I2C_ERRORS_timeout_or_tlow_error_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 16)
#define DL_I2C_ERRORS_smbus_alert_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 18)
#define DL_I2C_ERRORS_unexpected_event_cnt(_payload) _PPRZ_VAL_uint16_t(_payload, 20)
#define DL_I2C_ERRORS_last_unexpected_event(_payload) _PPRZ_VAL_uint32_t(_payload, 22)
#define DL_I2C_ERRORS_bus_number(_payload) _PPRZ_VAL_uint8_t(_payload, 26)

#define DL_RDYB_TRAJECTORY_commanded_phi(_payload) _PPRZ_VAL_float(_payload, 2)
#define DL_RDYB_TRAJECTORY_commanded_theta(_payload) _PPRZ_VAL_float(_payload, 6)
#define DL_RDYB_TRAJECTORY_commanded_psi(_payload) _PPRZ_VAL_float(_payload, 10)
#define DL_RDYB_TRAJECTORY_setpoint_x(_payload) _PPRZ_VAL_float(_payload, 14)
#define DL_RDYB_TRAJECTORY_setpoint_y(_payload) _PPRZ_VAL_float(_payload, 18)
#define DL_RDYB_TRAJECTORY_setpoint_z(_payload) _PPRZ_VAL_float(_payload, 22)

#define DL_HENRY_GNSS_last_imu_update(_payload) _PPRZ_VAL_uint32_t(_payload, 2)
#define DL_HENRY_GNSS_GPS_time(_payload) _PPRZ_VAL_double(_payload, 6)
#define DL_HENRY_GNSS_GPS_solution_valid(_payload) _PPRZ_VAL_uint8_t(_payload, 14)
#define DL_HENRY_GNSS_latitude(_payload) _PPRZ_VAL_double(_payload, 15)
#define DL_HENRY_GNSS_longitude(_payload) _PPRZ_VAL_double(_payload, 23)
#define DL_HENRY_GNSS_altitude(_payload) _PPRZ_VAL_double(_payload, 31)
#define DL_HENRY_GNSS_North(_payload) _PPRZ_VAL_double(_payload, 39)
#define DL_HENRY_GNSS_East(_payload) _PPRZ_VAL_double(_payload, 47)
#define DL_HENRY_GNSS_Down(_payload) _PPRZ_VAL_double(_payload, 55)
#define DL_HENRY_GNSS_SVs_Tracked(_payload) _PPRZ_VAL_uint8_t(_payload, 63)
#define DL_HENRY_GNSS_SVs_PVT(_payload) _PPRZ_VAL_uint8_t(_payload, 64)
#define DL_HENRY_GNSS_V_North(_payload) _PPRZ_VAL_double(_payload, 65)
#define DL_HENRY_GNSS_V_East(_payload) _PPRZ_VAL_double(_payload, 73)
#define DL_HENRY_GNSS_V_Down(_payload) _PPRZ_VAL_double(_payload, 81)


#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _VAR_MESSAGES_telemetry_H_
