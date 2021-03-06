/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

@interface NSMappingModel : NSObject <NSSecureCoding> {

	void* _reserved;
	void* _reserved1;
	void* _reserved2;
	NSMutableArray* _entityMappings;
	NSMutableDictionary* _entityMappingsByName;
	struct {
		unsigned _isInUse : 1;
		unsigned _reservedModelMapping : 31;
	}  _modelMappingFlags;

}

@property (retain) NSArray * entityMappings; 
@property (copy,readonly) NSDictionary * entityMappingsByName; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(int)migrationDebugLevel;
+(void)setMigrationDebugLevel:(int)arg1 ;
+(id)_mappingModelFromBundles:(id)arg1 forSourceModel:(id)arg2 destinationModel:(id)arg3 ;
+(id)_newMappingModelFromBundles:(id)arg1 forSourceHashes:(id)arg2 destinationHashes:(id)arg3 ;
+(id)mappingModelFromBundles:(id)arg1 forSourceModel:(id)arg2 destinationModel:(id)arg3 ;
+(id)inferredMappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3 ;
-(BOOL)isEditable;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEntityMappings:(NSArray *)arg1 ;
-(BOOL)_hasInferredMappingNeedingValidation;
-(id)description;
-(void)_setIsEditable:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)entityMappings;
-(void)_addEntityMapping:(id)arg1 ;
-(id)_initWithEntityMappings:(id)arg1 ;
-(NSDictionary *)entityMappingsByName;
-(BOOL)_isInferredMappingModel;
-(id)_sourceEntityVersionHashesByName;
-(id)_destinationEntityVersionHashesByName;
-(id)initWithCoder:(id)arg1 ;
-(void)_createCachesAndOptimizeState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_throwIfNotEditable;
-(void)dealloc;
@end

