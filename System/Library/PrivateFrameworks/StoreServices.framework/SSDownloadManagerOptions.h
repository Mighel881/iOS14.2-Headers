/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface SSDownloadManagerOptions : NSObject <NSCopying> {

	NSArray* _downloadKinds;
	BOOL _filterExternalOriginatedDownloads;
	NSString* _persistenceIdentifier;
	NSArray* _prefetchedDownloadExternalProperties;
	NSArray* _prefetchedDownloadProperties;
	BOOL _ignoreDivertedDownloads;

}

@property (nonatomic,copy) NSArray * prefetchedDownloadExternalProperties;              //@synthesize prefetchedDownloadExternalProperties=_prefetchedDownloadExternalProperties - In the implementation block
@property (assign,nonatomic) BOOL ignoreDivertedDownloads;                              //@synthesize ignoreDivertedDownloads=_ignoreDivertedDownloads - In the implementation block
@property (nonatomic,copy) NSArray * downloadKinds;                                     //@synthesize downloadKinds=_downloadKinds - In the implementation block
@property (nonatomic,copy) NSString * persistenceIdentifier;                            //@synthesize persistenceIdentifier=_persistenceIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * prefetchedDownloadProperties;                      //@synthesize prefetchedDownloadProperties=_prefetchedDownloadProperties - In the implementation block
@property (assign,nonatomic) BOOL shouldFilterExternalOriginatedDownloads;              //@synthesize filterExternalOriginatedDownloads=_filterExternalOriginatedDownloads - In the implementation block
-(NSString *)persistenceIdentifier;
-(void)setDownloadKinds:(NSArray *)arg1 ;
-(NSArray *)prefetchedDownloadExternalProperties;
-(unsigned long long)hash;
-(void)setIgnoreDivertedDownloads:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)ignoreDivertedDownloads;
-(void)setShouldFilterExternalOriginatedDownloads:(BOOL)arg1 ;
-(NSArray *)downloadKinds;
-(void)setPrefetchedDownloadProperties:(NSArray *)arg1 ;
-(NSArray *)prefetchedDownloadProperties;
-(BOOL)shouldFilterExternalOriginatedDownloads;
-(void)setPersistenceIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPrefetchedDownloadExternalProperties:(NSArray *)arg1 ;
@end
