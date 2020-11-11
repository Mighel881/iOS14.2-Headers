/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSPredicate, NSDictionary;

@interface NSBatchUpdateRequestEncodingToken : NSObject <NSSecureCoding> {

	NSString* _entityName;
	NSPredicate* _predicate;
	NSDictionary* _columnsToUpdate;
	long long _resultType;
	BOOL _includeSubEntities;
	BOOL _secure;

}

@property (nonatomic,retain,readonly) NSString * entityName;                       //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,retain,readonly) NSPredicate * predicate;                     //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * columnsToUpdate;              //@synthesize columnsToUpdate=_columnsToUpdate - In the implementation block
@property (nonatomic,readonly) long long resultType;                               //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) BOOL includeSubEntities;                            //@synthesize includeSubEntities=_includeSubEntities - In the implementation block
@property (nonatomic,readonly) BOOL secure;                                        //@synthesize secure=_secure - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)secure;
-(NSString *)entityName;
-(long long)resultType;
-(NSDictionary *)columnsToUpdate;
-(BOOL)includeSubEntities;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initForRequest:(id)arg1 ;
-(NSPredicate *)predicate;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end
