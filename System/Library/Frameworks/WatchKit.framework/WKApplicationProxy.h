/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface WKApplicationProxy : NSObject {

	NSURL* _bundleURL;

}

@property (nonatomic,readonly) NSURL * bundleURL;              //@synthesize bundleURL=_bundleURL - In the implementation block
+(id)watchAppBundleUrlWithContainerUrl:(id)arg1 ;
+(id)gizmoAppBundleUrlWithPluginUrl:(id)arg1 ;
+(id)applicationsForContainerProxy:(id)arg1 ;
-(NSURL *)bundleURL;
-(id)initWithBundleURL:(id)arg1 ;
@end
