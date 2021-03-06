/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDatabase/CalendarDatabase-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CADObjectID : NSObject <NSCopying, NSSecureCoding> {

	BOOL _temporary;
	int _entityType;
	int _entityID;

}

@property (nonatomic,readonly) int entityType;                                 //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) int entityID;                                   //@synthesize entityID=_entityID - In the implementation block
@property (getter=isTemporary,nonatomic,readonly) BOOL temporary;              //@synthesize temporary=_temporary - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)entityType;
-(int)entityID;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)entityName;
-(BOOL)isTemporary;
-(id)URIRepresentation;
-(id)stringRepresentation;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithEntityType:(int)arg1 entityID:(int)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

