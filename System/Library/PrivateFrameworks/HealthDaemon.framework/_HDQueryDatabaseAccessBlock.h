/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HDQueryServer, NSString;

@interface _HDQueryDatabaseAccessBlock : NSObject {

	/*^block*/id _block;
	HDQueryServer* _queryServer;
	NSString* _processBundleIdentifier;
	long long _qualityOfService;
	double _creationTime;

}

@property (nonatomic,copy,readonly) id block;                                        //@synthesize block=_block - In the implementation block
@property (nonatomic,__weak,readonly) HDQueryServer * queryServer;                   //@synthesize queryServer=_queryServer - In the implementation block
@property (nonatomic,copy,readonly) NSString * processBundleIdentifier;              //@synthesize processBundleIdentifier=_processBundleIdentifier - In the implementation block
@property (nonatomic,readonly) long long qualityOfService;                           //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) double creationTime;                                  //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,readonly) BOOL shouldThrottle; 
-(NSString *)processBundleIdentifier;
-(long long)qualityOfService;
-(BOOL)shouldRunAfterBlock:(id)arg1 foregroundBundleIdentifiers:(id)arg2 ;
-(HDQueryServer *)queryServer;
-(id)description;
-(id)block;
-(BOOL)shouldThrottle;
-(double)creationTime;
-(id)initWithBlock:(/*^block*/id)arg1 queryServer:(id)arg2 ;
@end

