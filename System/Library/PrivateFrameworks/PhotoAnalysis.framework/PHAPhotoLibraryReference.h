/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PHAPhotoLibraryReference : NSObject {

	NSString* _path;

}

@property (copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(id)init;
-(id)dictionaryRepresentation;
-(id)initWithLibraryURL:(id)arg1 ;
-(NSString *)path;
-(BOOL)isEqualToPhotoLibraryReference:(id)arg1 ;
@end

