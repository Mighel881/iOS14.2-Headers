/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString;

@interface WBSCredentialMatchCriteria : NSObject {

	unsigned long long _options;
	NSURL* _URL;
	NSString* _partialUsername;

}

@property (nonatomic,readonly) unsigned long long options;                   //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * partialUsername;              //@synthesize partialUsername=_partialUsername - In the implementation block
-(unsigned long long)options;
-(NSString *)partialUsername;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 partialUsername:(id)arg3 ;
-(NSURL *)URL;
@end
