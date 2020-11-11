/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UITraitCollection;


@protocol SXPresentationEnvironment <NSObject>
@property (nonatomic,readonly) CGSize viewportSize; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsets; 
@property (nonatomic,readonly) UITraitCollection * presentationTraitCollection; 
@property (nonatomic,readonly) unsigned long long viewingLocation; 
@required
-(UIEdgeInsets)safeAreaInsets;
-(CGSize)viewportSize;
-(UITraitCollection *)presentationTraitCollection;
-(unsigned long long)viewingLocation;

@end
