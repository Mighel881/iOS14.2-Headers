/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TPSValidatable.h>

@class NSString, NSDictionary;

@interface TPSTargetingValidation : NSObject <TPSValidatable> {

	BOOL _ignoreCache;
	NSString* _identifier;
	NSString* _name;
	NSDictionary* _targetContext;
	unsigned long long _joinType;

}

@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * targetContext;               //@synthesize targetContext=_targetContext - In the implementation block
@property (assign,nonatomic) unsigned long long joinType;              //@synthesize joinType=_joinType - In the implementation block
@property (assign,nonatomic) BOOL ignoreCache;                         //@synthesize ignoreCache=_ignoreCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)key;
-(id)stringValue;
-(id)arrayValue;
-(BOOL)boolValue;
-(long long)integerValue;
-(void)setJoinType:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(NSString *)name;
-(NSString *)description;
-(void)setIgnoreCache:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)value;
-(BOOL)ignoreCache;
-(unsigned long long)joinType;
-(void)cancel;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)targetContext;
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithTargetContext:(id)arg1 ;
-(void)setTargetContext:(NSDictionary *)arg1 ;
@end
