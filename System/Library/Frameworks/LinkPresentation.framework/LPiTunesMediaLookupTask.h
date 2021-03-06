/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSLookup.h>

@class NSString;

@interface LPiTunesMediaLookupTask : AMSLookup {

	NSString* _identifier;
	NSString* _storefrontCountryCode;

}
-(void)start:(/*^block*/id)arg1 ;
-(id)callerID;
-(id)sharedBag;
-(id)initWithIdentifier:(id)arg1 storefrontCountryCode:(id)arg2 ;
-(id)_compileQueryParametersWithBundleIds:(id)arg1 itemIds:(id)arg2 ;
@end

