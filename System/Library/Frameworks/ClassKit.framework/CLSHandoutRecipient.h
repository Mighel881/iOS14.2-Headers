/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString;

@interface CLSHandoutRecipient : CLSObject <CLSRelationable> {

	NSString* _classID;
	NSString* _personID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * classID;                         //@synthesize classID=_classID - In the implementation block
@property (nonatomic,copy) NSString * personID;                        //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) NSString * parentObjectID; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)classID;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(BOOL)validateObject:(id*)arg1 ;
-(void)setClassID:(NSString *)arg1 ;
-(id)initWithClassID:(id)arg1 personID:(id)arg2 ;
@end

