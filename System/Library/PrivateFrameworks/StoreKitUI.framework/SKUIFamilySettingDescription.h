/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUISettingDescription.h>

@class SKUISettingsFamilyViewStateCoordinator;

@interface SKUIFamilySettingDescription : SKUISettingDescription {

	SKUISettingsFamilyViewStateCoordinator* _viewStateCoordinator;
	long long _viewState;

}

@property (nonatomic,readonly) long long viewState;              //@synthesize viewState=_viewState - In the implementation block
+(Class)_viewClassForSettingDescription:(id)arg1 ;
-(long long)viewState;
-(id)initWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)handleSelectionOnCompletion:(/*^block*/id)arg1 ;
-(BOOL)_initiallyHidden;
-(void)_updateViewState;
-(void)_updateWithViewState:(long long)arg1 ;
@end
