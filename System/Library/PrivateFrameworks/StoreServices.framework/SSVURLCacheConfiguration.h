/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SSVURLCacheConfiguration : NSObject {

	BOOL _supportsProcessSharing;
	NSString* _sessionIdentifier;

}

@property (nonatomic,copy) NSString * sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsProcessSharing;              //@synthesize supportsProcessSharing=_supportsProcessSharing - In the implementation block
-(BOOL)supportsProcessSharing;
-(void)setSupportsProcessSharing:(BOOL)arg1 ;
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)arg1 ;
@end
