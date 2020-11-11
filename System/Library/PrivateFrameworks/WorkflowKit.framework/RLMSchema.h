/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableDictionary;

@interface RLMSchema : NSObject <NSCopying> {

	NSArray* _objectSchema;
	Schema* _objectStoreSchema;
	NSMutableDictionary* _objectSchemaByName;

}

@property (nonatomic,retain) NSMutableDictionary * objectSchemaByName;              //@synthesize objectSchemaByName=_objectSchemaByName - In the implementation block
@property (nonatomic,copy) NSArray * objectSchema; 
+(id)sharedSchema;
+(Class)classForString:(id)arg1 ;
+(id)partialPrivateSharedSchema;
+(id)dynamicSchemaFromObjectStoreSchema:(const Schema*)arg1 ;
+(id)partialSharedSchema;
+(id)schemaWithObjectClasses:(id)arg1 ;
+(id)sharedSchemaForClass:(Class)arg1 ;
-(id)init;
-(void)setObjectSchemaByName:(NSMutableDictionary *)arg1 ;
-(id)description;
-(Schema*)objectStoreCopy;
-(NSArray *)objectSchema;
-(BOOL)isEqualToSchema:(id)arg1 ;
-(void)setObjectSchema:(NSArray *)arg1 ;
-(NSMutableDictionary *)objectSchemaByName;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)schemaForClassName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
