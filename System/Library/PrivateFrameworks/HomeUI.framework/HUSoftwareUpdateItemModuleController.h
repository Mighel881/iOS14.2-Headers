/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUSoftwareUpdateUIPresentationDelegate.h>

@protocol HUSoftwareUpdateItemModuleControllerDelegate;
@class HUSoftwareUpdateItemModule, NSString;

@interface HUSoftwareUpdateItemModuleController : HUItemTableModuleController <HUSoftwareUpdateUIPresentationDelegate> {

	id<HUSoftwareUpdateItemModuleControllerDelegate> _delegate;

}

@property (nonatomic,readonly) HUSoftwareUpdateItemModule * module; 
@property (nonatomic,__weak,readonly) id<HUSoftwareUpdateItemModuleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUSoftwareUpdateItemModuleControllerDelegate>)delegate;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(id)initWithModule:(id)arg1 ;
-(BOOL)canSelectItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(id)softwareUpdateUIManager:(id)arg1 presentViewController:(id)arg2 ;
-(id)softwareUpdateUIManager:(id)arg1 dismissViewController:(id)arg2 ;
-(id)initWithModule:(id)arg1 delegate:(id)arg2 ;
-(void)_startUpdateOnAccessories:(id)arg1 ;
@end

