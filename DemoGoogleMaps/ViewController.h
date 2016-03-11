//
//  ViewController.h
//  DemoGoogleMaps
//
//  Created by Dambert on 3/11/16.
//  Copyright © 2016 com.starleaks. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController<MKMapViewDelegate>

@property (weak, nonatomic) IBOutlet MKMapView *MapView;

@end

