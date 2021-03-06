/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTSleepModeManager.h>

@protocol MTSleepModeManager <NSObject>
@property (nonatomic,readonly) BOOL isEnabled; 
@required
-(BOOL)isEnabled;

@end


@class NSString;

@interface MTSleepModeManager : NSObject <MTSleepModeManager> {

	BOOL _enabled;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) BOOL isEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)checkIn;
-(void)reconnect;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 isSynchronous:(BOOL)arg2 ;
-(void)setEnabled:(BOOL)arg1 valueDidChangeBlock:(/*^block*/id)arg2 ;
-(BOOL)isEnabled;
-(id)initWithDelegate:(id)arg1 ;
@end

