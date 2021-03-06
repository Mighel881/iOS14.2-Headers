/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>

@class NSValue, PLManagedAsset, NSString;

@interface PLManagedLegacyFace : PLManagedObject

@property (nonatomic,retain) NSValue * relativeRectValue; 
@property (nonatomic,retain) PLManagedAsset * asset; 
@property (assign,nonatomic) CGRect relativeRect; 
@property (assign,nonatomic) short identifier; 
@property (nonatomic,retain) NSString * albumUUID; 
+(id)entityName;
-(void)delete;
-(CGRect)relativeRect;
-(void)setRelativeRect:(CGRect)arg1 ;
@end

