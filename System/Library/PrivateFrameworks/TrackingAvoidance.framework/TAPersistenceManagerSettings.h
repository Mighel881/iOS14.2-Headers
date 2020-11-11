/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString;

@interface TAPersistenceManagerSettings : NSObject {

	NSURL* _persistenceDirectoryURL;
	NSString* _persistenceStoreFileName;

}

@property (nonatomic,retain) NSURL * persistenceDirectoryURL;                  //@synthesize persistenceDirectoryURL=_persistenceDirectoryURL - In the implementation block
@property (nonatomic,retain) NSString * persistenceStoreFileName;              //@synthesize persistenceStoreFileName=_persistenceStoreFileName - In the implementation block
-(id)init;
-(id)initWithDirectoryURLOrDefault:(id)arg1 storeFileNameOrDefault:(id)arg2 ;
-(NSURL *)persistenceDirectoryURL;
-(NSString *)persistenceStoreFileName;
-(id)_getStoreURL;
-(void)setPersistenceDirectoryURL:(NSURL *)arg1 ;
-(void)setPersistenceStoreFileName:(NSString *)arg1 ;
@end
