/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary;

@interface WBSSiteMetadataRequest : NSObject <NSCopying> {

	NSURL* _url;
	NSDictionary* _extraInfo;

}

@property (nonatomic,readonly) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraInfo;              //@synthesize extraInfo=_extraInfo - In the implementation block
-(id)init;
-(unsigned long long)hash;
-(NSURL *)url;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)extraInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 extraInfo:(id)arg2 ;
@end

