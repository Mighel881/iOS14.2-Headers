/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDSPSystemReadyProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@protocol HDSPSystemReadyDelegate;
@class HDSPEnvironment, NSString;

@interface HDSPSimulatorReadyProvider : NSObject <HDSPSystemReadyProvider, HDSPEnvironmentAware> {

	HDSPEnvironment* _environment;
	id<HDSPSystemReadyDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL isSystemReady; 
@property (assign,nonatomic,__weak) id<HDSPSystemReadyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                   //@synthesize environment=_environment - In the implementation block
-(BOOL)isInDemoMode;
-(id)initWithEnvironment:(id)arg1 ;
-(BOOL)isSystemReady;
-(id<HDSPSystemReadyDelegate>)delegate;
-(void)setDelegate:(id<HDSPSystemReadyDelegate>)arg1 ;
-(HDSPEnvironment *)environment;
@end

