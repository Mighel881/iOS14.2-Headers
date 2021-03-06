/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, LPImage;

@interface LPAssociatedApplicationMetadata : NSObject <NSSecureCoding, NSCopying> {

	NSString* _bundleIdentifier;
	LPImage* _icon;
	NSString* _caption;
	NSString* _action;
	long long _clipAction;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) LPImage * icon;                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * caption;                       //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSString * action;                        //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long clipAction;                   //@synthesize clipAction=_clipAction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(unsigned long long)hash;
-(LPImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setIcon:(LPImage *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCaption:(NSString *)arg1 ;
-(long long)clipAction;
-(void)setClipAction:(long long)arg1 ;
-(NSString *)caption;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)action;
@end

