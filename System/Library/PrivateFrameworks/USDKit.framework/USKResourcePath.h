/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <USDKit/USDKit-Structs.h>
@interface USKResourcePath : NSObject {

	SdfAssetPath _path;

}
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)path;
-(id)resolvedPath;
-(SdfAssetPath)sdfAssetPath;
-(id)initWithSdfAssetPath:(SdfAssetPath)arg1 ;
@end

