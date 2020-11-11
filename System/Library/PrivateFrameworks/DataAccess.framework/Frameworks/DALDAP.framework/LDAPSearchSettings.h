/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface LDAPSearchSettings : NSObject {

	NSString* _searchDescription;
	NSString* _searchBase;
	unsigned long long _scope;

}

@property (nonatomic,retain) NSString * searchDescription;              //@synthesize searchDescription=_searchDescription - In the implementation block
@property (nonatomic,retain) NSString * searchBase;                     //@synthesize searchBase=_searchBase - In the implementation block
@property (assign,nonatomic) unsigned long long scope;                  //@synthesize scope=_scope - In the implementation block
-(unsigned long long)hash;
-(void)setScope:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)scope;
-(void)setSearchBase:(NSString *)arg1 ;
-(NSString *)searchBase;
-(id)settingsDict;
-(id)initWithSettingsDict:(id)arg1 ;
-(void)setSearchDescription:(NSString *)arg1 ;
-(BOOL)hasSameScopeAndBaseAsOther:(id)arg1 ;
-(NSString *)searchDescription;
@end
