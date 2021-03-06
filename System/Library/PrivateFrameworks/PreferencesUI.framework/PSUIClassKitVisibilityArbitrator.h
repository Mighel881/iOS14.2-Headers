/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CLSSettingsVisibilityController;

@interface PSUIClassKitVisibilityArbitrator : NSObject {

	unsigned long long _visibilityState;
	/*^block*/id _visibilityStateChangeHandler;
	CLSSettingsVisibilityController* _visibilityController;

}

@property (assign,nonatomic) unsigned long long visibilityState;                                  //@synthesize visibilityState=_visibilityState - In the implementation block
@property (nonatomic,retain) CLSSettingsVisibilityController * visibilityController;              //@synthesize visibilityController=_visibilityController - In the implementation block
@property (nonatomic,copy) id visibilityStateChangeHandler;                                       //@synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler - In the implementation block
-(id)init;
-(CLSSettingsVisibilityController *)visibilityController;
-(void)settingsVisibilityDidChange:(id)arg1 ;
-(void)setVisibilityState:(unsigned long long)arg1 ;
-(void)setVisibilityStateChangeHandler:(id)arg1 ;
-(void)setVisibilityController:(CLSSettingsVisibilityController *)arg1 ;
-(unsigned long long)visibilityState;
-(void)reloadVisibilityState;
-(void)dealloc;
-(id)visibilityStateChangeHandler;
@end

