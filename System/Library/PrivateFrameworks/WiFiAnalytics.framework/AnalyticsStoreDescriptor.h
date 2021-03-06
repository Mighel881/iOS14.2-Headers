/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSDictionary, NSPersistentStoreDescription;

@interface AnalyticsStoreDescriptor : NSObject {

	unsigned long long _type;
	NSURL* _modelURL;
	NSURL* _storeURL;
	NSDictionary* _remoteStoreOptions;
	NSPersistentStoreDescription* _storeDescription;

}

@property (nonatomic,retain) NSURL * modelURL;                                               //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,retain) NSURL * storeURL;                                               //@synthesize storeURL=_storeURL - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * remoteStoreOptions;                            //@synthesize remoteStoreOptions=_remoteStoreOptions - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreDescription * storeDescription;              //@synthesize storeDescription=_storeDescription - In the implementation block
+(id)defaultPersistentStoreURL;
+(id)applicationSupportDirectoryPath;
+(id)defaultModelURL;
+(id)directStoreDescriptor;
+(id)serverStoreDescriptor;
-(id)initWithType:(unsigned long long)arg1 storeURL:(id)arg2 modelURL:(id)arg3 ;
-(NSURL *)modelURL;
-(NSDictionary *)remoteStoreOptions;
-(void)setType:(unsigned long long)arg1 ;
-(NSPersistentStoreDescription *)storeDescription;
-(unsigned long long)type;
-(NSURL *)storeURL;
-(void)setStoreURL:(NSURL *)arg1 ;
-(void)setModelURL:(NSURL *)arg1 ;
@end

