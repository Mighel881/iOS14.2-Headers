/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIViewController;

@interface UIDebuggingInformationVCHierarchyDataContainer : NSObject {

	UIViewController* _viewController;
	long long _level;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) long long level;                                       //@synthesize level=_level - In the implementation block
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 atLevel:(long long)arg2 ;
-(long long)level;
-(void)setLevel:(long long)arg1 ;
@end

