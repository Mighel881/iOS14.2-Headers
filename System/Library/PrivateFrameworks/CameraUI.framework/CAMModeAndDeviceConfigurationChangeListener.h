/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CAMModeAndDeviceConfigurationChangeListener : NSObject {

	long long _desiredMode;
	long long _desiredDevicePosition;
	/*^block*/id _handler;

}

@property (assign,nonatomic) long long desiredMode;                        //@synthesize desiredMode=_desiredMode - In the implementation block
@property (assign,nonatomic) long long desiredDevicePosition;              //@synthesize desiredDevicePosition=_desiredDevicePosition - In the implementation block
@property (nonatomic,copy) id handler;                                     //@synthesize handler=_handler - In the implementation block
-(void)setDesiredDevicePosition:(long long)arg1 ;
-(long long)desiredMode;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(void)setDesiredMode:(long long)arg1 ;
-(long long)desiredDevicePosition;
@end
