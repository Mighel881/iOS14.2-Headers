/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TFAppLockup, NSString, NSURL;

@interface TFLaunchScreen : NSObject {

	TFAppLockup* _lockup;
	NSString* _testerNotes;
	NSURL* _howToScreenshotSupportUrl;

}

@property (nonatomic,readonly) TFAppLockup * lockup;                           //@synthesize lockup=_lockup - In the implementation block
@property (nonatomic,copy,readonly) NSString * testerNotes;                    //@synthesize testerNotes=_testerNotes - In the implementation block
@property (nonatomic,readonly) NSURL * howToScreenshotSupportUrl;              //@synthesize howToScreenshotSupportUrl=_howToScreenshotSupportUrl - In the implementation block
-(TFAppLockup *)lockup;
-(id)initWithLockup:(id)arg1 testerNotes:(id)arg2 howToScreenshotSupportUrl:(id)arg3 ;
-(NSURL *)howToScreenshotSupportUrl;
-(NSString *)testerNotes;
@end
