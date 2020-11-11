/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class CPWindow, UITraitCollection;


@protocol CPWindowProviding <NSObject>
@property (nonatomic,readonly) CPWindow * carWindow; 
@property (nonatomic,readonly) UITraitCollection * carTraitCollection; 
@required
-(long long)activationState;
-(UITraitCollection *)carTraitCollection;
-(void)updateLayoutGuideWithInsets:(UIEdgeInsets)arg1;
-(CPWindow *)carWindow;

@end
