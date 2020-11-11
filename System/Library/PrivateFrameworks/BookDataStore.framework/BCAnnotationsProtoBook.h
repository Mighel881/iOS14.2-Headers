/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BookDataStore/BookDataStore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface BCAnnotationsProtoBook : PBCodable <NSCopying> {

	NSMutableArray* _annotations;
	NSString* _appVersion;
	NSString* _assetID;
	NSString* _assetVersion;

}

@property (nonatomic,retain) NSString * assetID;                        //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,retain) NSString * appVersion;                     //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetVersion; 
@property (nonatomic,retain) NSString * assetVersion;                   //@synthesize assetVersion=_assetVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * annotations;              //@synthesize annotations=_annotations - In the implementation block
+(Class)annotationType;
-(NSMutableArray *)annotations;
-(void)setAppVersion:(NSString *)arg1 ;
-(void)setAnnotations:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)appVersion;
-(unsigned long long)hash;
-(void)setAssetID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)assetVersion;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAssetVersion:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addAnnotation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)assetID;
-(void)clearAnnotations;
-(BOOL)hasAssetVersion;
-(unsigned long long)annotationsCount;
-(id)annotationAtIndex:(unsigned long long)arg1 ;
@end
