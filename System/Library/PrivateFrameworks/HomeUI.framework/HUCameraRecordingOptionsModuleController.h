/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>

@class NSString;

@interface HUCameraRecordingOptionsModuleController : HUItemTableModuleController <HUSwitchCellDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)didSelectItem:(id)arg1 ;
-(id)initWithModule:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(BOOL)isItemHeader:(id)arg1 ;
@end

