/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSString;

@interface NTKUpNextDataSourceEntry : NSObject <NSCopying> {

	BOOL _isDonation;
	NSSet* _identifiers;
	NSString* _localizedName;

}

@property (nonatomic,retain) NSSet * identifiers;                   //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,retain) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) BOOL isDonation;                       //@synthesize isDonation=_isDonation - In the implementation block
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSSet *)identifiers;
-(id)description;
-(NSString *)localizedName;
-(void)setIdentifiers:(NSSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsDonation:(BOOL)arg1 ;
-(id)initWithDataSourceIdentifiers:(id)arg1 localizedName:(id)arg2 isDonation:(BOOL)arg3 ;
-(BOOL)isDonation;
@end

