/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/_SFLinkBanner.h>

@class WBSAppLink;

@interface _SFAppLinkBanner : _SFLinkBanner {

	WBSAppLink* _appLink;

}

@property (nonatomic,readonly) WBSAppLink * appLink;              //@synthesize appLink=_appLink - In the implementation block
-(WBSAppLink *)appLink;
-(id)initWithAppLink:(id)arg1 openActionHandler:(/*^block*/id)arg2 ;
@end
