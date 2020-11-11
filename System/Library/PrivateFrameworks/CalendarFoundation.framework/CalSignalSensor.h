/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSObject;

@interface CalSignalSensor : NSObject {

	NSObject*<OS_dispatch_source> _signalSource;
	int _signal;
	/*^block*/id _fireBlock;

}

@property (assign,nonatomic) int signal;              //@synthesize signal=_signal - In the implementation block
@property (nonatomic,copy) id fireBlock;              //@synthesize fireBlock=_fireBlock - In the implementation block
-(void)setFireBlock:(id)arg1 ;
-(void)setSignal:(int)arg1 ;
-(void)startSensor;
-(id)description;
-(id)initWithSignal:(int)arg1 ;
-(void)_shutDownSource;
-(id)fireBlock;
-(int)signal;
-(void)dealloc;
-(void)stopSensor;
@end
