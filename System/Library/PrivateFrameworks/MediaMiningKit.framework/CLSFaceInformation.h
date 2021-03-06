/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CLSFaceInformation : NSObject {

	unsigned _faceSizeIsGood : 1;
	unsigned _faceIsGood : 1;
	unsigned _faceIsOk : 1;
	BOOL _isKnownPerson;
	BOOL _isHiddenPerson;
	double _faceSize;
	double _faceQuality;

}

@property (readonly) double faceSize;                  //@synthesize faceSize=_faceSize - In the implementation block
@property (readonly) double faceQuality;               //@synthesize faceQuality=_faceQuality - In the implementation block
@property (readonly) BOOL isKnownPerson;               //@synthesize isKnownPerson=_isKnownPerson - In the implementation block
@property (readonly) BOOL isHiddenPerson;              //@synthesize isHiddenPerson=_isHiddenPerson - In the implementation block
@property (readonly) BOOL faceSizeIsGood;              //@synthesize faceSizeIsGood=_faceSizeIsGood - In the implementation block
@property (readonly) BOOL faceIsGood;                  //@synthesize faceIsGood=_faceIsGood - In the implementation block
@property (readonly) BOOL faceIsOk;                    //@synthesize faceIsOk=_faceIsOk - In the implementation block
-(double)faceQuality;
-(id)description;
-(double)faceSize;
-(BOOL)faceIsOk;
-(BOOL)faceIsGood;
-(BOOL)isKnownPerson;
-(id)initForKnownPersonWithFaceSize:(double)arg1 faceQuality:(double)arg2 faceSizeIsGood:(BOOL)arg3 faceIsGood:(BOOL)arg4 faceIsOk:(BOOL)arg5 ;
-(id)initForHiddenPersonWithFaceSize:(double)arg1 faceQuality:(double)arg2 faceSizeIsGood:(BOOL)arg3 faceIsGood:(BOOL)arg4 faceIsOk:(BOOL)arg5 ;
-(id)initForUnknownPersonWithFaceSize:(double)arg1 faceQuality:(double)arg2 faceSizeIsGood:(BOOL)arg3 faceIsGood:(BOOL)arg4 faceIsOk:(BOOL)arg5 ;
-(BOOL)isHiddenPerson;
-(BOOL)faceSizeIsGood;
@end

