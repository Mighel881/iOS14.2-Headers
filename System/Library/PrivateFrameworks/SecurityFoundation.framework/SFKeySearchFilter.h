/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SFKeySearchFilter : NSObject <NSCopying, NSSecureCoding> {

	id _keySearchFilterInternal;

}

@property (nonatomic,copy) NSArray * specifiers; 
@property (nonatomic,copy) NSArray * domains; 
+(BOOL)supportsSecureCoding;
-(NSArray *)specifiers;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDomains:(NSArray *)arg1 ;
-(NSArray *)domains;
-(id)initWithCoder:(id)arg1 ;
-(void)setSpecifiers:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

