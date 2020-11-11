/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@interface HDMaintenanceOperation : NSOperation {

	double _startedTime;

}
+(id)maintenanceOperationWithName:(id)arg1 queue:(id)arg2 synchronousBlock:(/*^block*/id)arg3 ;
+(id)maintenanceOperationWithName:(id)arg1 asynchronousBlock:(/*^block*/id)arg2 ;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(void)_operationDidStart;
-(void)_operationDidFinish;
@end
