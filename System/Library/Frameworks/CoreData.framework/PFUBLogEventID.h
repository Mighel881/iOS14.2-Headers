/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PFUBLogEventID : NSObject {

	NSString* _idString;
	long long _hash;
	long long _eventType;

}

@property (nonatomic,readonly) NSString * idString;              //@synthesize idString=_idString - In the implementation block
@property (nonatomic,readonly) long long hash;                   //@synthesize hash=_hash - In the implementation block
@property (nonatomic,readonly) long long eventType;              //@synthesize eventType=_eventType - In the implementation block
+(void)initialize;
-(NSString *)idString;
-(id)initWithCustomKey:(id)arg1 ;
-(long long)eventType;
-(long long)hash;
-(id)initWithEventType:(int)arg1 ;
@end
