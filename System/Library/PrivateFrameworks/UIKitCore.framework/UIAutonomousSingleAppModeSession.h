/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIAutonomousSingleAppModeConfiguration;

@interface UIAutonomousSingleAppModeSession : NSObject {

	BOOL _active;
	UIAutonomousSingleAppModeConfiguration* _effectiveConfiguration;

}

@property (nonatomic,copy) UIAutonomousSingleAppModeConfiguration * effectiveConfiguration;              //@synthesize effectiveConfiguration=_effectiveConfiguration - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                //@synthesize active=_active - In the implementation block
+(void)__gaxTrampoline_requestSessionWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)requestSessionWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)__gaxTrampoline_currentlyActiveSession;
+(id)currentlyActiveSession;
-(void)setActive:(BOOL)arg1 ;
-(void)__gaxTrampoline_endSessionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isActive;
-(id)initWithEffectiveConfiguration:(id)arg1 ;
-(void)_guidedAccessStateDidChange:(id)arg1 ;
-(void)setEffectiveConfiguration:(UIAutonomousSingleAppModeConfiguration *)arg1 ;
-(UIAutonomousSingleAppModeConfiguration *)effectiveConfiguration;
-(void)endWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

