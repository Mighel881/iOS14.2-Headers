/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <IOKitten/IOKitten-Structs.h>
@class NSObject;

@interface IOKNotificationPort : NSObject {

	IONotificationPortRef _port;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) IONotificationPortRef port;                      //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) unsigned machPort; 
-(IONotificationPortRef)port;
-(id)init;
-(unsigned)machPort;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithMasterPort:(unsigned)arg1 onDispatchQueue:(id)arg2 ;
-(id)initOnDispatchQueue:(id)arg1 ;
-(void)dealloc;
@end

