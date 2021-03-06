/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSTimer;

@interface TPStatusBarManager : NSObject {

	NSString* _currentAbbreviatedStatusBarString;
	NSTimer* _callDurationTimer;

}

@property (nonatomic,retain) NSTimer * callDurationTimer;                             //@synthesize callDurationTimer=_callDurationTimer - In the implementation block
@property (nonatomic,copy) NSString * currentAbbreviatedStatusBarString;              //@synthesize currentAbbreviatedStatusBarString=_currentAbbreviatedStatusBarString - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)updateCurrentAbbreviatedStatusBarStringAndSendNotification;
-(void)updateCurrentAbbreviatedStatusBarString;
-(NSTimer *)callDurationTimer;
-(NSString *)currentAbbreviatedStatusBarString;
-(void)setCurrentAbbreviatedStatusBarString:(NSString *)arg1 ;
-(void)setCallDurationTimer:(NSTimer *)arg1 ;
@end

