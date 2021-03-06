/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleDepth/ADEspressoInferenceDescriptor.h>

@class ADEspressoImageDescriptor;

@interface ADEspressoPearlColorInferenceDescriptor : ADEspressoInferenceDescriptor {

	ADEspressoImageDescriptor* _colorInput;
	ADEspressoImageDescriptor* _disparityInput;
	ADEspressoImageDescriptor* _disparityOutput;

}

@property (nonatomic,readonly) ADEspressoImageDescriptor * colorInput;                   //@synthesize colorInput=_colorInput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * disparityInput;               //@synthesize disparityInput=_disparityInput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * disparityOutput;              //@synthesize disparityOutput=_disparityOutput - In the implementation block
-(ADEspressoImageDescriptor *)colorInput;
-(ADEspressoImageDescriptor *)disparityOutput;
-(id)initWithNetworkProvider:(id)arg1 inputColorFormat:(unsigned)arg2 disparityFormat:(unsigned)arg3 ;
-(ADEspressoImageDescriptor *)disparityInput;
@end

