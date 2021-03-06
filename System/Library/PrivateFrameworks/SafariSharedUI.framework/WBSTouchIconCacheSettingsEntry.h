/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WBSSiteMetadataImageCacheSettingsEntry.h>

@class NSString, NSDate;

@interface WBSTouchIconCacheSettingsEntry : NSObject <WBSSiteMetadataImageCacheSettingsEntry> {

	BOOL _lastRequestWasInUserLoadedWebpage;
	BOOL _iconInCache;
	BOOL _requestDidSucceed;
	BOOL _higherPriorityIconDownloadFailedDueToNetworkError;
	long long _databaseID;
	NSString* _host;
	NSString* _UUIDString;
	NSDate* _lastRequestDate;
	long long _requestCount;
	long long _transparencyAnalysisResult;

}

@property (nonatomic,copy,readonly) NSString * host;                                                //@synthesize host=_host - In the implementation block
@property (nonatomic,copy,readonly) NSString * UUIDString;                                          //@synthesize UUIDString=_UUIDString - In the implementation block
@property (nonatomic,readonly) NSDate * lastRequestDate;                                            //@synthesize lastRequestDate=_lastRequestDate - In the implementation block
@property (nonatomic,readonly) BOOL lastRequestWasInUserLoadedWebpage;                              //@synthesize lastRequestWasInUserLoadedWebpage=_lastRequestWasInUserLoadedWebpage - In the implementation block
@property (nonatomic,readonly) long long requestCount;                                              //@synthesize requestCount=_requestCount - In the implementation block
@property (getter=isIconInCache,nonatomic,readonly) BOOL iconInCache;                               //@synthesize iconInCache=_iconInCache - In the implementation block
@property (nonatomic,readonly) BOOL requestDidSucceed;                                              //@synthesize requestDidSucceed=_requestDidSucceed - In the implementation block
@property (nonatomic,readonly) long long transparencyAnalysisResult;                                //@synthesize transparencyAnalysisResult=_transparencyAnalysisResult - In the implementation block
@property (nonatomic,readonly) BOOL higherPriorityIconDownloadFailedDueToNetworkError;              //@synthesize higherPriorityIconDownloadFailedDueToNetworkError=_higherPriorityIconDownloadFailedDueToNetworkError - In the implementation block
@property (nonatomic,readonly) unsigned long long downloadStatusFlags; 
@property (nonatomic,readonly) long long databaseID;                                                //@synthesize databaseID=_databaseID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entryWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(BOOL)arg3 requestCount:(long long)arg4 iconInCache:(BOOL)arg5 requestDidSucceed:(BOOL)arg6 transparencyAnalysisResult:(long long)arg7 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg8 UUIDString:(id)arg9 ;
-(long long)databaseID;
-(NSString *)UUIDString;
-(BOOL)isIconInCache;
-(NSString *)host;
-(id)init;
-(unsigned long long)hash;
-(id)initWithHost:(id)arg1 ;
-(BOOL)requestDidSucceed;
-(unsigned long long)downloadStatusFlags;
-(id)initWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(BOOL)arg3 requestCount:(long long)arg4 iconInCache:(BOOL)arg5 requestDidSucceed:(BOOL)arg6 transparencyAnalysisResult:(long long)arg7 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg8 UUIDString:(id)arg9 ;
-(long long)requestCount;
-(id)initWithSQLiteRow:(id)arg1 ;
-(id)entryByAddingRequestInUserLoadedWebPage:(BOOL)arg1 isIconInCache:(BOOL)arg2 requestDidSucceed:(BOOL)arg3 transparencyAnalysisResult:(long long)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5 UUIDString:(id)arg6 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)lastRequestDate;
-(long long)transparencyAnalysisResult;
-(BOOL)lastRequestWasInUserLoadedWebpage;
-(BOOL)higherPriorityIconDownloadFailedDueToNetworkError;
-(id)entryWithDatabaseID:(long long)arg1 ;
@end

