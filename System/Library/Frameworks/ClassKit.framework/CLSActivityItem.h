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

@interface CLSActivityItem : CLSObject <CLSRelationable> {

	NSString* _title;
	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)identifier;
-(NSString *)description;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)_init;
-(BOOL)validateObject:(id*)arg1 ;
@end

