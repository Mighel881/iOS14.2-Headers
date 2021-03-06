/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSDate, NSDictionary;

@interface WBSPasswordBreachResultQuery : NSObject {

	NSData* _persistentIdentifier;
	NSDate* _dateLastModified;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * persistentIdentifier;                        //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * dateLastModified;                            //@synthesize dateLastModified=_dateLastModified - In the implementation block
+(id)dictionaryRepresentationsForResultQueries:(id)arg1 ;
+(id)resultQueriesFromDictionaryRepresentations:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)persistentIdentifier;
-(id)description;
-(id)initWithPersistentIdentifier:(id)arg1 dateLastModified:(id)arg2 ;
-(NSDate *)dateLastModified;
@end

