/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface NSSUsageBundle : NSObject <NSSecureCoding> {

	BOOL _purgeable;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSArray* _categories;
	unsigned long long _totalSize;

}

@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * categories;                           //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) unsigned long long totalSize;                   //@synthesize totalSize=_totalSize - In the implementation block
@property (assign,getter=isPurgeable,nonatomic) BOOL purgeable;              //@synthesize purgeable=_purgeable - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)categories;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setCategories:(NSArray *)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)isPurgeable;
-(void)setTotalSize:(unsigned long long)arg1 ;
-(unsigned long long)totalSize;
-(id)initWithCoder:(id)arg1 ;
-(void)setPurgeable:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

