/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class _SFSettingsAlertItem;


@protocol SFSettingsAlertItemView <NSObject>
@property (assign,nonatomic,__weak) _SFSettingsAlertItem * item; 
@property (assign,nonatomic) BOOL hidesSeparator; 
@property (assign,nonatomic) long long defaultBackgroundMode; 
@property (nonatomic,readonly) long long backgroundMode; 
@property (assign,nonatomic,__weak) id<SFSettingsAlertItemViewDelegate> delegate; 
@required
-(_SFSettingsAlertItem *)item;
-(id<SFSettingsAlertItemViewDelegate>)delegate;
-(void)setItem:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)setHidesSeparator:(BOOL)arg1;
-(BOOL)hidesSeparator;
-(long long)backgroundMode;
-(void)setDefaultBackgroundMode:(long long)arg1;
-(long long)defaultBackgroundMode;

@end
