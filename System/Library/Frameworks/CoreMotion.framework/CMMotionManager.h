/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreMotion/CoreMotion-Structs.h>
@class CMAmbientPressureData, CMAccelerometerData, CMGyroData, CMMagnetometerData, CMDeviceMotion;

@interface CMMotionManager : NSObject {

	id _internal;

}

@property (getter=isSidebandSensorFusionAvailable,nonatomic,readonly) BOOL sidebandSensorFusionAvailable; 
@property (getter=isPredictedDeviceMotionAvailable,nonatomic,readonly) BOOL predictedDeviceMotionAvailable; 
@property (readonly) CMAmbientPressureData * ambientPressureData; 
@property (readonly) CMAmbientPressureData * compensatedAmbientPressureData; 
@property (getter=isDeviceMotionLiteAvailable,nonatomic,readonly) BOOL isDeviceMotionLiteAvailable; 
@property (assign,nonatomic) double accelerometerUpdateInterval; 
@property (getter=isAccelerometerAvailable,nonatomic,readonly) BOOL accelerometerAvailable; 
@property (getter=isAccelerometerActive,nonatomic,readonly) BOOL accelerometerActive; 
@property (readonly) CMAccelerometerData * accelerometerData; 
@property (assign,nonatomic) double gyroUpdateInterval; 
@property (getter=isGyroAvailable,nonatomic,readonly) BOOL gyroAvailable; 
@property (getter=isGyroActive,nonatomic,readonly) BOOL gyroActive; 
@property (readonly) CMGyroData * gyroData; 
@property (assign,nonatomic) double magnetometerUpdateInterval; 
@property (getter=isMagnetometerAvailable,nonatomic,readonly) BOOL magnetometerAvailable; 
@property (getter=isMagnetometerActive,nonatomic,readonly) BOOL magnetometerActive; 
@property (readonly) CMMagnetometerData * magnetometerData; 
@property (assign,nonatomic) double deviceMotionUpdateInterval; 
@property (nonatomic,readonly) unsigned long long attitudeReferenceFrame; 
@property (getter=isDeviceMotionAvailable,nonatomic,readonly) BOOL deviceMotionAvailable; 
@property (getter=isDeviceMotionActive,nonatomic,readonly) BOOL deviceMotionActive; 
@property (readonly) CMDeviceMotion * deviceMotion; 
@property (assign,nonatomic) BOOL showsDeviceMovementDisplay; 
+(unsigned long long)availableAttitudeReferenceFrames;
+(void)initialize;
+(void)setAllowInBackground:(BOOL)arg1 ;
+(BOOL)deviceMotionInitialized:(Sample*)arg1 ;
+(BOOL)hasRunMiniCal;
+(void)dummySelector:(id)arg1 ;
+(BOOL)configureM7Activity:(BOOL)arg1 stepCounting:(BOOL)arg2 activityForceCodeTransition:(BOOL)arg3 stepCountingForceCodeTransition:(BOOL)arg4 threshold:(BOOL)arg5 onBodyDetection:(BOOL)arg6 ispMode:(unsigned char)arg7 predictionInterval:(float)arg8 logLevel:(char)arg9 proactiveRevisitTime:(unsigned short)arg10 ;
+(BOOL)startGyroMiniCalibration;
+(SCD_Struct_CM34)gyroCalibrationDatabaseGetBiasFit;
+(BOOL)supportsGyroMiniCalibration;
+(void)dumpDb:(long long)arg1 toURL:(id)arg2 onCompletion:(/*^block*/id)arg3 ;
+(BOOL)northAlignedReferenceFrame:(unsigned long long)arg1 ;
+(SCD_Struct_CM34)gyroCalibrationDatabaseGetBiasFitAndEstimate:(SCD_Struct_CM9*)arg1 atTemperature:(float)arg2 ;
+(BOOL)setUrgentCalFlag;
-(id)initPrivate;
-(void)connect;
-(void)startAmbientPressureUpdates;
-(void)stopDeviceMotionUpdates;
-(void)setGyroDataCallback:(/*function pointer*/void*)arg1 info:(void*)arg2 interval:(double)arg3 ;
-(unsigned long long)attitudeReferenceFrame;
-(void)stopAmbientPressureUpdatesPrivate;
-(void)stopAmbientPressureUpdates;
-(void)startGyroUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(CMAccelerometerData *)accelerometerData;
-(id)init;
-(void)deallocPrivate;
-(void)willResignActivePrivate:(id)arg1 ;
-(void)stopAccelerometerUpdatesPrivate;
-(void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(unsigned long long)arg1 toQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)showDeviceMovementDisplay;
-(BOOL)isAmbientPressureActive;
-(double)deviceMotionUpdateInterval;
-(void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1 ;
-(BOOL)setSidebandSensorFusionEnable:(BOOL)arg1 measureLatency:(BOOL)arg2 withSnoopHandler:(/*^block*/id)arg3 ;
-(void)startMagnetometerUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(double)gyroUpdateInterval;
-(void)stopGyroUpdates;
-(void)setDeviceMotionCallback:(/*function pointer*/void*)arg1 info:(void*)arg2 interval:(double)arg3 fsync:(BOOL)arg4 ;
-(void)setDeviceMotionUpdateInterval:(double)arg1 ;
-(void)willResignActive:(id)arg1 ;
-(void)onDeviceMotion:(const Sample*)arg1 ;
-(void)rebuildGytt;
-(void)stopMagnetometerUpdatesPrivate;
-(CMMagnetometerData *)magnetometerData;
-(BOOL)isPredictedDeviceMotionAvailable;
-(void)applyNorthReference:(Sample*)arg1 ;
-(void)onGyro:(const Sample*)arg1 ;
-(void)startCompensatedAmbientPressureUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopGyroUpdatesPrivate;
-(BOOL)showsDeviceMovementDisplay;
-(void)setAccelerometerUpdateIntervalPrivate:(double)arg1 ;
-(void)didBecomeActive:(id)arg1 ;
-(BOOL)setMotionThreadPriority:(int)arg1 ;
-(BOOL)useAccelerometer;
-(void)startDeviceMotionLiteUpdatesForDeviceID:(id)arg1 usingConfiguration:(SCD_Struct_CM35)arg2 toQueue:(id)arg3 withFusedHandler:(/*^block*/id)arg4 ;
-(void)stopCompensatedAmbientPressureUpdates;
-(double)magnetometerUpdateInterval;
-(void)stopAccelerometerUpdates;
-(BOOL)isAmbientPressureAvailable;
-(void)startCompensatedAmbientPressureUpdates;
-(void)startCompensatedAmbientPressureUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setCompensatedAmbientPressureUpdateIntervalPrivate:(double)arg1 ;
-(double)accelerometerUpdateInterval;
-(void)_startDeviceMotionErrorUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setShowsDeviceMovementDisplayPrivate:(BOOL)arg1 ;
-(void)stopDeviceMotionLiteUpdatesForDeviceID:(id)arg1 ;
-(void)startGyroUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startAccelerometerUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initUsing6AxisSensorFusion;
-(BOOL)isAccelerometerActive;
-(void)onAmbientPressure:(const Sample*)arg1 ;
-(void)stopDeviceMotionUpdatesPrivate;
-(void)startMagnetometerUpdates;
-(void)stopMagnetometerUpdates;
-(BOOL)isGyroActive;
-(BOOL)isCompensatedAmbientPressureActive;
-(BOOL)isMagnetometerAvailable;
-(void)setShowsDeviceMovementDisplay:(BOOL)arg1 ;
-(BOOL)setSidebandSensorFusionEnable:(BOOL)arg1 ;
-(BOOL)isDeviceMotionLiteAvailable;
-(void)setPowerConservationMode:(int)arg1 ;
-(void)_stopDeviceMotionErrorUpdates;
-(void)setGyroUpdateIntervalPrivate:(double)arg1 ;
-(void)startAmbientPressureUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setMagnetometerUpdateInterval:(double)arg1 ;
-(void)startAccelerometerUpdates;
-(BOOL)isSidebandSensorFusionAvailable;
-(void)applyInitialReference:(Sample*)arg1 ;
-(id)predictedDeviceMotionAtTimestamp:(double)arg1 error:(out id*)arg2 ;
-(void)setAmbientPressureUpdateInterval:(double)arg1 ;
-(CMGyroData *)gyroData;
-(void)startDeviceMotionLiteFusedUpdatesForDeviceID:(id)arg1 toQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(int)gyttNumTemperatures;
-(BOOL)isDeviceMotionActive;
-(double)compensatedAmbientPressureUpdateInterval;
-(BOOL)readRawAmbientPressureSamplesFromDB:(id)arg1 toQueue:(id)arg2 where:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)setNotificationCallback:(/*function pointer*/void*)arg1 info:(void*)arg2 ;
-(void)setAccelerometerUpdateInterval:(double)arg1 ;
-(BOOL)isMagnetometerActive;
-(BOOL)setSidebandSensorFusionEnable:(BOOL)arg1 withSnoopHandler:(/*^block*/id)arg2 ;
-(void)setMagnetometerDataCallback:(/*function pointer*/void*)arg1 info:(void*)arg2 interval:(double)arg3 ;
-(BOOL)sendDeviceMotionError:(int)arg1 ;
-(void)onAccelerometer:(const Sample*)arg1 ;
-(BOOL)isGyroAvailable;
-(void)setAmbientPressureUpdateIntervalPrivate:(double)arg1 ;
-(void)setGyroUpdateInterval:(double)arg1 ;
-(double)ambientPressureUpdateInterval;
-(void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1 toQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)computeNonlinearPRTTFromDB:(id)arg1 where:(id)arg2 ;
-(void)startAccelerometerUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)didBecomeActivePrivate:(id)arg1 ;
-(void)stopCompensatedAmbientPressureUpdatesPrivate;
-(id)initUsingGyroOnlySensorFusion;
-(void)setMagnetometerUpdateIntervalPrivate:(double)arg1 ;
-(BOOL)isAccelerometerAvailable;
-(void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setUseAccelerometer:(BOOL)arg1 ;
-(void)dismissDeviceMovementDisplay;
-(CMDeviceMotion *)deviceMotion;
-(void)setAccelerometerDataCallback:(/*function pointer*/void*)arg1 info:(void*)arg2 interval:(double)arg3 ;
-(void)onCompensatedAmbientPressure:(const Sample*)arg1 ;
-(void)onMagnetometer:(const Sample*)arg1 ;
-(void)startDeviceMotionUpdates;
-(void)startMagnetometerUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setDeviceMotionUpdateIntervalPrivate:(double)arg1 ;
-(BOOL)isDeviceMotionAvailable;
-(CMAmbientPressureData *)compensatedAmbientPressureData;
-(void)startGyroUpdates;
-(void)dealloc;
-(void)startAmbientPressureUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(CMAmbientPressureData *)ambientPressureData;
-(void)setCompensatedAmbientPressureUpdateInterval:(double)arg1 ;
-(void)setSidebandTimeSyncHandler:(/*^block*/id)arg1 ;
@end

