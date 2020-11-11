/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RBSAttribute.h>

@class NSString;

@interface RBSDomainAttribute : RBSAttribute {

	NSString* _domain;
	NSString* _name;
	NSString* _sourceEnvironment;

}

@property (nonatomic,copy) NSString * domain;                                   //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * sourceEnvironment;                        //@synthesize sourceEnvironment=_sourceEnvironment - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullyQualifiedName; 
+(id)attributeWithDomain:(id)arg1 name:(id)arg2 ;
+(id)attributeWithDomain:(id)arg1 name:(id)arg2 sourceEnvironment:(id)arg3 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)sourceEnvironment;
-(id)_initWithDomain:(id)arg1 name:(id)arg2 sourceEnvironment:(id)arg3 ;
-(NSString *)name;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)fullyQualifiedName;
-(NSString *)domain;
-(void)setSourceEnvironment:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end
